#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	if (a % 5 == 0){
		printf("%d", a / 5 + 0);
	}
	else {
		printf("%d", a / 5 + 1);
	}
	return 0;
}