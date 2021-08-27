a,b,c = input('').split()
a = int(a)
b = int(b)
if c == '+':
    print(a+b)
elif c == '-':
    print(a-b)
elif c == '*':
    print(a*b)
elif c == '/':
    print(round(a/b, 3))
elif c == '//':
    print(round(a//b, 3))
elif c == '%':
    print(round(a%b, 3))
else:
    print("Mission Impossible")
