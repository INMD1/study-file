#include <stdio.h>

int main(void)
{
	int testcase, a, result = 0;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		scanf("%d", &a);
		while (1){
			result++;
			if (result % 2 == 0) {
				break;
			}
		}
		if (a - result > 0 && (a - result) % 2 == 0) {
			printf("%d %d\n", result, a - result);
		}
		else {
			printf("NO\n");
		}
		result = 0;
	}
	return 0;
}