#include <stdio.h>

int main() {
	int a, b, f;
	scanf("%d %d %d", &a, &b, &f);
	printf("%d", (a + 1) * (b + 1) / (f + 1) - 1);
	return 0;
}