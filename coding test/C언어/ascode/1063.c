#include<stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a % b == 0 && a % c == 0 && a % d == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
    return 0;
}