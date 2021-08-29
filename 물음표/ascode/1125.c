#include <stdio.h>

int main(void)
{
    int a[3][3],b,j,c ,o = 0,f = 0;
	scanf("%d", &b);
	for (int i = 0; i < b; i++)
	{
		for(j = 0; j < 3; j++)
		{
			for (c = 0; c < 3; c++)
			{
				scanf("%d", &a[j][c]);
			}
		}
		for (j = 0; j < 3; j++)
		{
			if (a[j][0] == a[j][1] && a[j][0] == a[j][2]) {
				if (a[j][0] == 1) {
					o++;
				}
				else if (a[j][0] == 2) {
					f++;
				}
			}
			if (a[0][j] == a[1][j] && a[0][j] == a[2][j]) {
				if (a[0][j] == 1) {
					o++;
				}
				else if (a[0][j] == 2) {
					f++;
				}
			}
		}
		if (a[0][0] == a[1][1] && a[0][0] == a[2][2]) {
			if (a[0][0] == 1) {
				o++;
			}
			else if (a[0][0] == 2) {
				f++;
			}
		}
		if (a[0][2] == a[1][1] && a[0][2] == a[2][0]) {
			if (a[0][0] == 1) {
				o++;
			}
			else if (a[0][0] == 2) {
				f++;
			}
		}
		printf("%d %d\n", o, f);
		if (o > f) {
			printf("1\n");
		}else if (o < f) {
			printf("2\n");
		}else{
			printf("draw!\n");
		}
		o = 0, f = 0;
	}
    return 0;
}