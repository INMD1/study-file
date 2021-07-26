#include<stdio.h>

int main() {
	int a;
	int c, b;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d %d", &b, &c);
		for (int i = 0; i < c; i++) {
			for (int i = 0; i < b; i++) {
				printf("*");
			}
			printf("\n");
		}

	}

    return 0;
}