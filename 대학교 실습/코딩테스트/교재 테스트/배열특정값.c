#include <stdio.h>

int main() {
	int arr[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int a;
	
	printf("탐색할 값을 입력하시오 : ");
	scanf("%d", &a);
	for (int i = 0; i <= 10; i++) {
		if (arr[i] == a) {
			printf("탐색 성공 인덱스: %d", i);
		}
	}
}