#include<stdio.h> 

int main()
{
	double a, b, c, d, e;
	double v;

	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);

	v = (a + b + c + d + e) / 5;
	printf("%.3f", v);
    return 0;
}

