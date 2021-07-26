#include <stdio.h>
int main()
{
	double a, b, c;
	int result;
	scanf("%lf %lf %lf", &a, &b, &c);
	result = ((a + b) * c) / 2;
	printf("%d", result);
    return 0;
}