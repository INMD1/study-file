#include<stdio.h>

int main() {
	long long int a;
	int b, c, d, e;
	scanf("%lld", &a);
	b = a / 50000;
	a = a % 50000;
	printf("%d ", b);
	c = a / 10000;
	a = a % 10000;
	printf("%d ", c);
	d = a / 5000;
	a = a % 5000;
	printf("%d ", d);
	e = a / 1000;
	printf("%d", e);
    return 0;
}