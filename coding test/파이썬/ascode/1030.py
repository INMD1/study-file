a = int(input(''))
while(a):
    b = input('')
    if b.count('char') >= 2:
        print(b.replace('charchar',''))
    else:
        print(b)
    a = a - 1