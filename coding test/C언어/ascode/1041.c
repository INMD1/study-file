#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);

	while (a % 2 == 1)
	{
		printf("%d", a);
		break;
	}
	while (a % 2 == 0)
	{
		printf("%d", a + 1);
		break;
	}
    return 0;
}