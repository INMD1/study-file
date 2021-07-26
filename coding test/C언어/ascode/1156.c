#include <stdio.h>
int main() {
    int a, b, count = 0, day = 0, price = 63000;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        for(; ;){
            if (day == 7)
            {
                day = 0;
                price = price + 1400;
            }
 
             b = b - price;
             count++;
             day++;
  
            if (b <= 0) {
                break;
            }
        }
        printf("%d\n", count);
        count = 0, price = 63000, day = 0;
    }
    return 0;
}