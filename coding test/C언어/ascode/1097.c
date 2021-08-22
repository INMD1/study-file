#include <stdio.h>
int main()
{
	int a, b, result = 0;
	printf("======================\n");
	printf("입금	출금	잔고\n");
	printf("======================\n");
	while (1)
	{
		if (scanf("%d", &b) == 0)
		{
			printf("======================\n");
			return 0;
		}
		else {
			if (b < 0) {
				result = result - (b * -1);
				printf("	%d	%d\n", b * -1, result);
			}
			else if (b > 0) {
				result = result + b;
				printf("%d		%d\n", b, result);
			}
		}

	}
	return 0;
}