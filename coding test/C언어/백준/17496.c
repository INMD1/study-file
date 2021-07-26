#include <stdio.h>

int main() {
	int a, b, c, d, result = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a %b == 0)
	{
		result = (a / b) - 1;
	}
	else {
		result = (a / b);
	}
	result = result * c;
	printf("%d", result * d);
	
	return 0;
}