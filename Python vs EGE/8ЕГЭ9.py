a = "ABCX"
c = 0
for x1 in a:
    for x2 in a:
        for x3 in a:
            for x4 in a:
                for x5 in a:
                    s = x1+x2+x3+x4+x5
                    if (s[-1] == 'X' or s[-1] != 'X') and s[0] != 'X' and s[1] != 'X' and s[2] != 'X' and s[3] != 'X':
                        c +=1
print(c)
