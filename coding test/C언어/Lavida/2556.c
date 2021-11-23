#include <stdio.h>

int main() {
	int testcase, a,b = 0;
	int i, j;
	char arry[101][101], arr[101][101];

	scanf("%d", &testcase);
	for (int v = 0; v < testcase; v++)
	{
		scanf("%d", &a);
		for ( i = 0; i < a; i++)
		{
			scanf("%s", arry[i]);
		}
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (arry[i][j] != arry[j][i]) {
					b = 1;
					goto ONE;
				}
			}
		}

	ONE:
		if (b != 1) {
			printf("YES\n");
		}
		else if (b == 1) {
			printf("NO\n");
			b = 0;
		}
	}
	return 0;
}