#include<stdio.h>

int main(void){

	int a, b, day = 0, count = 0 , result;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		while (1)
		{
			if (count == 7) {
				count = 0;
			}

			if (0 <= count && count <= 3) {
				b = b - 36000;
				
				count = count + 1;
				day++;
			}
			else if(4 <= count && count <= 6){
				b = b - 60000;

				count = count + 1;
				day++;
			}

			if (b <= 0) {
				break;
			}

		}
		printf("%d\n", day);
		count = 0;
		day = 0;
	}

    return 0;
}