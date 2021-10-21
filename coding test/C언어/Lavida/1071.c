#include<stdio.h>

int main(){
	int i, j,temp = 0;
	int a , b;
	int c[100];
	scanf("%d", &b);
	for (int v = 0; v < b; v++)
	{
		scanf("%d", &a);
		for (int i = 0; i < a; i++)
		{
			scanf("%d", &c[i]);
		}
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a - 1; j++)
			{
				if (c[j] > c[j + 1]) {
					temp = c[j];
					c[j] = c[j + 1];
					c[j + 1] = temp;
				}
			}
		}
		for (i = 0; i < a; i++) {
			if (c[i] == c[i + 1]) {
				c[i] = 0;
			}
		}
		for (int i = 0; i < a; i++) {
			if (c[i] != 0) {
				printf("%d ", c[i]);
			}
		}
		printf("\n");
	}

	return 0;
}