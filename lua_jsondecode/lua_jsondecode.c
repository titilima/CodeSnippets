///////////////////////////////////////////////////////////////////////////////
// FileName:    lua_jsondecode.c
// Created:     2010/06/13
// Author:      titilima
// CopyRight:   Titi Studio (?) 2001-2010
//-----------------------------------------------------------------------------
// Information: JSON parser for lua api
///////////////////////////////////////////////////////////////////////////////

#include <lua.h>
#include "json\JSON_parser.h"
#include <assert.h>
#include <string.h>
#include <malloc.h>

struct decodectx {
    lua_State* lua;
    int depth;
    int previoustype;
    char* key;
};

void addsubtable(lua_State* lua, const char* key)
{
    if (NULL == key)
    {
        int len = lua_objlen(lua, -1);

        // top[len + 1] = newarr
        lua_pushinteger(lua, len + 1);
        lua_newtable(lua);
        lua_settable(lua, -3);

        // top = newarr
        lua_pushinteger(lua, len + 1);
    }
    else
    {
        // top["key"] = newarr
        lua_pushstring(lua, key);
        lua_newtable(lua);
        lua_settable(lua, -3);

        // top = newarr
        lua_pushstring(lua, key);
    }
    lua_gettable(lua, -2);
}

void pushjsonvalue(lua_State* lua, int type, const JSON_value* value)
{
    switch (type)
    {
    case JSON_T_INTEGER:
        lua_pushinteger(lua, value->vu.integer_value);
        break;
    case JSON_T_FLOAT:
        lua_pushnumber(lua, value->vu.float_value);
        break;
    case JSON_T_NULL:
        lua_pushnil(lua);
        break;
    case JSON_T_TRUE:
        lua_pushboolean(lua, 1);
        break;
    case JSON_T_FALSE:
        lua_pushboolean(lua, 0);
        break;
    case JSON_T_STRING:
        lua_pushstring(lua, value->vu.str.value);
        break;
    default:
        assert(0);
    }
}

void addelement(lua_State* lua, int type, const JSON_value* value)
{
    int len = lua_objlen(lua, -1);

    // top[len + 1] = value
    lua_pushinteger(lua, len + 1);
    pushjsonvalue(lua, type, value);
    lua_settable(lua, -3);
}

void addpair(
    lua_State* lua,
    int type,
    const char* key,
    const JSON_value* value)
{
    lua_pushstring(lua, key);
    pushjsonvalue(lua, type, value);
    lua_settable(lua, -3);
}

static int decode(void* ctx, int type, const JSON_value* value)
{
    struct decodectx* dc = (struct decodectx*)ctx;
    switch (type)
    {
    case JSON_T_ARRAY_BEGIN:
    case JSON_T_OBJECT_BEGIN:
        {
            if (dc->depth > 0)
            {
                if (JSON_T_KEY == dc->previoustype)
                {
                    addsubtable(dc->lua, dc->key);
                    free(dc->key);
                    dc->key = NULL;
                }
                else
                {
                    addsubtable(dc->lua, NULL);
                }
            }
            else
            {
                lua_newtable(dc->lua);
            }
            ++dc->depth;
        }
        break;
    case JSON_T_ARRAY_END:
    case JSON_T_OBJECT_END:
        {
            if (dc->depth > 1)
            {
                lua_pop(dc->lua, 1);
                --dc->depth;
            }
        }
        break;
    case JSON_T_INTEGER:
    case JSON_T_FLOAT:
    case JSON_T_NULL:
    case JSON_T_TRUE:
    case JSON_T_FALSE:
    case JSON_T_STRING:
        {
            if (JSON_T_KEY == dc->previoustype)
            {
                addpair(dc->lua, type, dc->key, value);
                free(dc->key);
                dc->key = NULL;
            }
            else
            {
                addelement(dc->lua, type, value);
            }
        }
        break;
    case JSON_T_KEY:
        {
            dc->key = _strdup(value->vu.str.value);
        }
        break;   
    default:
        assert(0);
    }

    dc->previoustype = type;
    return 1;
}

int lua_jsondecode(lua_State* lua, const char* json)
{
    JSON_config cfg;
    struct decodectx dc;
    int ret = 1;
    int top = lua_gettop(lua);

    struct JSON_parser_struct* j = NULL;

    init_JSON_config(&cfg);

    dc.lua = lua;
    dc.depth = 0;
    dc.previoustype = JSON_T_NONE;

    cfg.callback = decode;
    cfg.callback_ctx = &dc;
    cfg.depth = 19;
    cfg.allow_comments = 1;
    cfg.handle_floats_manually = 0;

    j = new_JSON_parser(&cfg);
    while ('\0' != *json)
    {
        if (!JSON_parser_char(j, *json))
        {
            ret = 0;
            break;
        }

        ++json;
    }

    if (ret && !JSON_parser_done(j))
        ret = 0;
    delete_JSON_parser(j);

    if (!ret)
        lua_settop(lua, top);
    return ret;
}
