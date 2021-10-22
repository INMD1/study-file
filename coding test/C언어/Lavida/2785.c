#include <stdio.h>

int main() 
{
	int arr[4], a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			scanf("%d", &arr[i]);
		}
		if (arr[0] + arr[1] < arr[2] + arr[3]) {
			printf("Yoo HJ wins\n");
		}
		else if (arr[0] + arr[1] > arr[2] + arr[3]) {
			printf("Kim DS wins\n");
		}
		else if (arr[0] + arr[1] == arr[2] + arr[3]) {
			printf("Draw\n");
		}
	}
	return 0;
}