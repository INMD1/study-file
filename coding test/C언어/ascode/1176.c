#include<stdio.h>

int main() {
	int arr[6], result = 0, count = 0,a = 0,b = 0;
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &arr[i]);
		result = result + arr[i];
	}
	if (result >= 91 & 180 >= result) {
		count++;
	}
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] % 2 == 1) {
			a++;
		}
		else if (arr[i] % 2 == 0) {
			b++;
		}
	}
	if (a == 2 & b == 4) {
		count++;
	}else if(a == 3 & b == 3) {
		count++;
	}else if (a == 4 & b == 2) {
		count++;
	}

	if (count == 2) {
		printf("BEST");
	}else if(count == 1) {
		printf("GOOD");
	}else if (count == 0) {
		printf("BAD");
	}
}