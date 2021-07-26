#include <stdio.h>
int main() {
	int a;
	char b;

	scanf("%d", &a);
	a = a * 2;
	for (int i = 0; i < a; i++) {
		scanf("%c", &b);
		if (b >= 'a' && b <= 'z') {
			printf("%c\n", b - 32);
		}
		else if (b >= 'A' && b <= 'Z') {
			printf("%c\n", b + 32);
		}

	}

    return 0;
}