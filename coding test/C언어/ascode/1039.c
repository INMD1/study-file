#include <stdio.h>

int main() {

	int num = 0;

	scanf("%d", &num);

	printf("%d", num % 2 == 1 && num % 7 == 0);
    return 0;
}