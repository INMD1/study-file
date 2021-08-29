a = int(input(''))
while(a):
    b = input('')
    if b.count('char') >= 2:
        if b.replace('char','') == '':
            print('char')
        else:
            print(b.replace('char',''))
    else:
        print(b)
    a = a - 1

