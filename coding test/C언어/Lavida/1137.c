#include <stdio.h>

int main() {
	int testcase,a,j,k, count = 0;
	char arr[20][11];
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		scanf("%d", &a);
		for (k = 0; k < a; k++)
		{
			scanf("%s", &arr[k]);
		}
		for (k = 0; k < a; k++)
		{
			for (int c = 0; c < 10; c++) {
				if (arr[k][c] == '.') {
					count = 1;
					break;
				}
			}
			if (count == 1 ) {
				for (int c = 0; c < 10; c++) {
					printf("%c", arr[k][c]);
				}
				printf("\n");
			}
			count = 0;
		}
	}
	return 0;
}