#include <stdio.h>
#include<string.h>

int main() {
	int a, result = 0;
	char arr[100];
	scanf("%d", &a);
	scanf("%s", &arr);
	for (int i = 0; i < a; i++) {
		
		result = result + (arr[i]-48);
	}
	printf("%d", result);

}