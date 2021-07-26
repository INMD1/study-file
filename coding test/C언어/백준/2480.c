#include <stdio.h>

int main() {
	int a[3], result = 0, max;
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	if (a[0] == a[1] && a[0] == a[2]) {
		result = 10000 + (a[0] * 1000);
	}
	else if (a[0] == a[1]) {
		result = 1000 + (a[0] * 100);
	}
	else if (a[1] == a[2]) {
		result = 1000 + (a[1] * 100);
	}
	else if (a[0] == a[2]) {
		result = 1000 + (a[2] * 100);
	}
	else {
		max = a[0];
		for (int i = 0; i < 3; i++)
		{
			if (max < a[i]) {
				max = a[i];
			}
		}
		result = (max * 100);
	}
	printf("%d", result);

	return 0;

}
