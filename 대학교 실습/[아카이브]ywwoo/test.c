#include <stdio.h>

int main() {
	int a, b,j,d, arr[1500000], arr1[10000], result = 0;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++)
	{	
		scanf("%d", arr[i]);
	}
	for (int i = 0; i < b; i++)
	{
		scanf("%d", arr1[i]);
	}
	for ( j = 0; j < b; j++)
	{
		for ( d = 0; d < a; d++)
		{
			if (arr1[j] == arr[d]) {
				result++;
			}
		}
	}!
	printf("%d", result);
}