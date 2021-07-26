#include <stdio.h>

int main() {
	int a, b, result= 0;
	int c, d, e, f, o;
	scanf("%d %d", &a, &b);
	result = a * b;
	scanf("%d %d %d %d %d", &c, &d, &e, &f, &o);
	printf("%d %d %d %d %d", c - result, d - result, e - result, f - result, o - result);
	return 0;
}