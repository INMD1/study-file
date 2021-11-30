#include <stdio.h>

int main(void)
{
	int testcase, a,b, result = 0;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		scanf("%d", &a);
		for (int i = 0; i < a; i++)
		{
			scanf("%d", &b);
			result += b;
		}
		printf("%d %d\n", result, result / a);
		result = 0;
	}
	return 0;
}