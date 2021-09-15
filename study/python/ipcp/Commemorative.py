import fractions
arr = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
count = 0
for i in arr:
    for c in arr2:
        if i > c:
            count  +=1
result = fractions.Fraction(count, 36)
print(str(result.numerator) + '/' + str(result.denominator))