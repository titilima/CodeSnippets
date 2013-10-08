function html2text(str)
    str = str:gsub("<br/>", "")
    str = str:gsub("&nbsp", " ")
    str = str:gsub("&amp;", "&")
    return str
end

