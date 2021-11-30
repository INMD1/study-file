#include <stdio.h>

int main(void)
{
	int testcase, a, result = 0;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		scanf("%d", &a);
		for (int i = 1; i <= a; i++)
		{
			result += i;
		}
		printf("%d\n", result);
		result = 0;
	}
	return 0;
}