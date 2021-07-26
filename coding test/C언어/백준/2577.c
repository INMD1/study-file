#include <stdio.h>
#include<string.h>

int main() {
	int a, num = 1;
	int arr[10] = { 0, };
	for (int i = 1; i <= 3; i++) {
		scanf("%d", &a);
		num = num * a;
	}
	// 10으로 나눗셈/나머지연산 하면 편하다
	int re;
	while (num > 0) {
		re = num % 10;
		arr[re]++;
		num /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

}