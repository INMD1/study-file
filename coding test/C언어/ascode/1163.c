#include <stdio.h>


int main() {
	int a, arr[1000], b, m = 0, n = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		for (int i = 0; i < b; i++)
		{
			scanf("%d", &arr[i]);
			if (arr[i] > 0) {
				m++;
			}
			else if (arr[i] < 0) {
				n++;
			}
		}
		printf("%d %d\n", n, m);
		m = 0, n = 0;
	}
    return 0;
}