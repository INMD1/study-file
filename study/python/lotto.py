import random

count = 0
while(count < 10):
    lotto = random.sample(range(1,46),6)

    sum = 0
    for i in lotto:
       sum = sum + i

    odd = 0
    for i in lotto:
        if(i%2 ==1):
            odd += 1

    if sum >=81 and sum <= 200 and odd >=2 and odd <=4:
        lotto.sort()
        for i in lotto:
            print('%3d' % (i), end='')
        print(' -> ', sum,'',odd, ':', 6-odd, sep='')
        count +=1 