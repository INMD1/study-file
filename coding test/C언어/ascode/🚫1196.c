#include <stdio.h> 

int main() { 
	int a, b;
	char arr[5];
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%s %d", &arr, &b);
		arr[b - 1] = '0';
		printf("%c%c%c%c\n", arr[0], arr[1], arr[2], arr[3]);
	}
	return 0; 
}

