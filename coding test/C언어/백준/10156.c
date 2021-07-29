#include <stdio.h>

int main() {
	int a, b, c, v;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	v = c - a * b;;
	if (v < 0) {printf("%d", -1 * v);}
	else if (v > 0) {printf("0");}
	else {printf("%d",  v);}
	return 0;
}
