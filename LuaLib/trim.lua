function trim(s)
    return s:gsub("^%s*(.-)%s*$", "%1")
end
