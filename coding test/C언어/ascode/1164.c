#include<stdio.h>


int main(void)
{
	int price, count = 0, hour = 5000;
	for ( ; ; ) {
		scanf("%d", &price);
		if (price == 0) {
			return 0;
		}
		else {
			while (1)
			{
				if (price <= 0) {
					break;
				}
				else {
					price = price - hour;
					count++;
				}
				hour = hour + 100;
			}
			printf("%d\n", count);
			count = 0;
			hour = 5000;
		}
	}
    return 0;
}

