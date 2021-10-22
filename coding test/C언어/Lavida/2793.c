#include <stdio.h>

int main() 
{
	int arr[101], count = 0, a, b,c;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		for (int i = 0; i < b; i++)
		{
			scanf("%d", &arr[i]);
		}
		scanf("%d", &c);
		for (int i = 0; i < b; i++)
		{
			if (arr[i] == c) {
				count++;
			}
		}
		if (count != 0) {
			printf("%d\n", count);
		}
		else {
			printf("None\n");
		}
		count = 0;
	}
	return 0;
}