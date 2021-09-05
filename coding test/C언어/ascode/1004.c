#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		scanf("%d %d %d",&c, &d, &e);
		for (int i = 1; i <=b; i++)
		{
			if (i % c == 0) {
				printf("A");
			}
			if (i % d == 0) {
				printf("B");
			}
			if (i % e == 0) {
				printf("C");
			}
		}
		printf("\n");
		
	}
}