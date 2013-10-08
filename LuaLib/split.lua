function split(str, ch)
    local nStart = 1
    local nSplit = 1
    local ret = {}
    while true do
        local idx, idx1 = str:find(ch, nStart)
        if not idx then
            ret[nSplit] = str:sub(nStart, -1)
            break
        end
        ret[nSplit] = str:sub(nStart, idx - 1)
        nStart = idx1 + 1
        nSplit = nSplit + 1
    end
    return ret
end
