#include <stdio.h>
#include <string.h>

int main() {
	int a,b,o;
	char arr[20];

	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d %s", &b, &arr);
		for (o = 0; o < strlen(arr); o++)
		{
			for (int i = 0; i < b; i++)
			{
				printf("%c", arr[o]);
			}
		}
		printf("\n");
	}
	return 0;
}