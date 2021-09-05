import re
a = int(input(''))
while(a):
    b = input('')
    if b.lower().count('char') >= 2:
        insensitive_hippo = re.compile(re.escape('char'), re.IGNORECASE)
        if insensitive_hippo.sub('', b) == '': 
            print("I Hate CharChar!")
        else :
             print(insensitive_hippo.sub('', b)
)
    else:
        print(b)
    a = a - 1
