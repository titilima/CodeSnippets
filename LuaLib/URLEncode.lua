function URLEncode(str)
    local host, path = str:match("(http://.-)(/.+)")
    path = path:gsub("[^%w/%.%?:_=&]", function (c)
            return string.format("%%%02X", string.byte(c))
        end)
    return host .. path
end
