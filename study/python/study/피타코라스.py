pita_list = []
for a in range(1,30):
    for b in range(a,30):
        for c in range(b,30):
            if (a*a + b *b) == c*c:
                pita_list.append([a,b,c])
print(pita_list)
