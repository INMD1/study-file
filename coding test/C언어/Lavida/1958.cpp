#include <stdio.h>

int a, b;

bool check(int x, int y) {
	if (x >= 0 && x < a) {
		if (y >= 0 && y < b) { return true; }
		else { return false; }
	}
	else { return false; }
}

int main(void) {

	int x, y;
	int testcase, j, count = 0;
	char input[30][30];

	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		int output[30][30] = { 0, };
		scanf("%d %d", &a, &b);

		for (int i = 0; i < a; i++)
		{

			scanf("%s", input[i]);
			for (j = 0; j < b; j++)
			{
				if (input[i][j] == '*')
				{
					output[i][j] = 9;
				}
				else if (input[i][j] == '#')
				{
					output[i][j] = 8;
				}
			}
		}

		for (int i = 0; i < a; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (output[i][j] == 9 || output[i][j] == 8)
				{
					continue;
				}
				for (x = -1; x <= 1; x++)
				{
					for (y = -1; y <= 1; y++)
					{
						if (output[i + x][j + y] == 9)
						{
							if (check(i + x, j + y)) {
								count = 1;
							}
						}
					}
				}
				for (x = -2; x <= 2; x++)
				{
					for (y = -2; y <= 2; y++)
					{
						if (output[i + x][j + y] == 8)
						{
							if (check(i + x, j + y)) {
								count = 1;
							}
						}
					}
				}
				output[i][j] = count;
				count = 0;
			}
		}

		for (int i = 0; i < a; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (output[i][j] == 9)
				{
					printf("*");
				}else if (output[i][j] == 8)
				{
					printf("#");
				}
				else
				{
					printf("%d", output[i][j]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}