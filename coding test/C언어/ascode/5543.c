#include <stdio.h>
int main() {
	int info[5];
	int a = 0, b = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &info[i]);
	}
	a = info[0], b = info[3];
	for (int i = 0; i < 5; i++)
	{
		if (i <= 2) {
			if (info[i] < a) {
				a = info[i];
			}
		}
		if (i >= 3) {
			if (info[i] < b) {
				b = info[i];
			}
		}
	}

	printf("%d", a + b - 50);

	return 0;
}