#include <stdio.h>
int main() {
	int a, b;
	scanf("%d""%d", &a, &b);

	if (b >= 45)
		b -= 45;
	else
	{
		a -= 1;
		if (a < 0)
			a += 24;
		b = (b + 60) - 45;
	}
	printf("%d %d", a, b);
}
