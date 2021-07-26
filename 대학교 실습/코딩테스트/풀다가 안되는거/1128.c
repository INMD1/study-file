#include<stdio.h>

int main() {
	int a, b, c;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d %d", &b, &c);
		for (int i = 1; i <= b; i++)
		{
			for (int d = 1; d <= c; d++)
			{
				if (i == 1 || i == b || d == 1 || d == c) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}

	}
}