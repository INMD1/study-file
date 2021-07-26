#include <stdio.h> 

int main() {
	int a, i;
	double b;
    char arr[3];
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		scanf("%lf %s", &b, &arr);
		if (arr[0] == 'l' && arr[1] == 'b') {
			printf("%d %.4f kg\n", i, b * 0.4536);
		}
		else if (arr[0] == 'k' && arr[1] == 'g')
		{
			printf("%d %.4f lb\n", i, b * 2.2046);
		}
		else if (arr[0] == 'g')
		{
			printf("%d %.4f l\n", i, b * 3.7854);
		}
		else if (arr[0] == 'l' && arr[1] != 'b')
		{
			printf("%d %.4f g\n", i, b * 0.2642);
		}
	}
	return 0;
}