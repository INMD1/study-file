#include <stdio.h>

int main() {
	unsigned long long a, b, c = 0, d = 1, e = 1;
	scanf("%llu", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%llu", &b);
		while (1)
		{
			d = 2 * d;
			e = 2 * e;
			c++;
			if (d / 2 < b && b <= e) {
				printf("%d\n", c);
				break;
			}
		}
		c = 0; d = 1, e = 1;
	}
}