#include<stdio.h>

int main() {
	double a, count;
	scanf("%lf", &a);
	a = a / 2;
	count = 3.14159265358979*(a*a);
	printf("%.5f", count);
     return 0;
}
