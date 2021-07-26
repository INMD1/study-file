#include<stdio.h> 

int main()
{
	double a,b;
	scanf("%lf", &a);
	b = (a - 32)*5/9;
	printf("%.2f", b);
    return 0;
}

