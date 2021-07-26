#include <stdio.h>
#include <math.h>

int main() {
	int a, result = 0;
	printf("n의 값을 입력하시오 : ");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		result = result + pow(i, 2);
	}
	printf("계산값은 %d 입니다", result);
}