#include <stdio.h>

int main() {
	int a, b, c, e;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &e);
	c = c + e;
	if (c < 60) {
		if (b < 60){
			if (a == 24) { printf("0 %d %d", a, b, c); }
			else if (a > 24) { printf("0 %d %d", a - 24, b, c); }
			else { printf("%d %d %d", a, b, c); }
		}
	}
	else if (c >= 60) {
		while (1)
		{
			if (c < 60) { break; }
			c = c - 60;
			b++;
		}
		if (b >= 60) {
			while (1)
			{
				if (b < 60) { break; }
				b = b - 60;
				a++;
			}
			if (a == 24) { printf("0 %d %d", b, c); }
			else if (a > 24) {
			while (1)
				{
					if (a < 24) { break; }
					a = a - 24;
				}
				printf("%d %d %d", a, b, c);
			}
			else { printf("%d %d %d", a, b, c); }
		}
		else {printf("%d %d %d", a, b, c);}
	}
	return 0;
}
