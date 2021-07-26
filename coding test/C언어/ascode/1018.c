#include <stdio.h>


int main() {
	int a;
	int e, b, c;
	scanf("%d", &a);
	e = a / 500;
	b = (a - e * 500) / 100;
	c = (a - e * 500 - b * 100) / 10;
	printf("%d\n", e);
	printf("%d\n", b);
	printf("%d\n", c);
    return 0;
}