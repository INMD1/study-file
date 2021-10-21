import math
m = 66.72 
M = 264.36
R = 34.6
H = 86
g = 980

f = 0.85264016435409222151938345813041 //cos값
D = 210.0
result1 = ((M+m)/m) * float(math.sqrt(2*g*R*(1 - f)))
print(result1)

result2 = D*(math.sqrt(g/(2*H)))
print(result2)
