#include <stdio.h>
int main() {
	int r = 0;
	char TestCase[8];
	scanf("%d", &r);
	for (int d = 0; d < r; d++) {
		scanf("%s", &TestCase);
		printf("%c", TestCase[2]);
		printf("%c\n", TestCase[3]);
	}
    return 0;
}