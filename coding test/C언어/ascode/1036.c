#include <stdio.h>
int main()
{
	double a, b, c;
	int result;
	scanf("dside : %lf, uside : %lf, height : %lf", &a, &b, &c);
	printf("%.1f", ((a + b) * c) / 2);
    return 0;
}