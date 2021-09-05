#include <stdio.h>

int main() {
	int a, b, c, e = 65, arr[1000],j;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &b, &c);
		for (int i = 0; i < c; i++)
		{
			scanf("%d", &arr[i]);
		}
		for (j = 1; j <= b; j++)
		{
			for (int i = 0; i < c; i++)
			{
				if (j % arr[i] == 0) {
					printf("%c", e + i);	
				}
			}
		}
		printf("\n");
	}
}