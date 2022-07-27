#include<stdio.h>

int main()
{
    int testcase = 0;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++) {
        int price = 0, date = 0, defaults=5000,day=0;
        scanf("%d", &price);
        while(1) {
            if(price <= 0) {
                printf("%d\n", date);
                break;
            }
            if(day == 10) {
                day =0;
                defaults +=200;
            }
            price -= defaults;
            day++;
            date++;
        }
    }
    return 0;
}