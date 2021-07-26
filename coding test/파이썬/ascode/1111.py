count = int(input())
 
for i  in range(count):
    result = 1
    u = int(input())
    for d in range(1, u + 1):
        result = result * d
    print(result)