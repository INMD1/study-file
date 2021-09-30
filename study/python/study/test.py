import re
a = int(input(''))
while(a):
    b = input('')
    if b.lower().count('char') >= 2:
        if b.replace('char','') == '':
            print("I Hate CharChar!")
        else :
             insensitive_hippo = re.compile(re.escape('char'), re.IGNORECASE)
             print(insensitive_hippo.sub('', b))
    else:
        print(b)
    a = a - 1
 