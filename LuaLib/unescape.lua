function unescape(str)
    str = str:gsub("+", " ")
    str = str:gsub("%%(%x%x)", function (h)
      return string.char(tonumber(h, 16))
    end)
    return str
end

