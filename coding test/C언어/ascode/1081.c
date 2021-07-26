#include <stdio.h>

int main() {
	int  result = 0, temp = 0, test = 0;
	int arr[7];
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &arr[i]);
		result = result + arr[i];
	}
	if (arr[0] > 45 || arr[0] < 1 || arr[1]>45 || arr[1] < 1 || arr[2]>45 || arr[2] < 1 || arr[3]>45 || arr[3] < 1 || arr[4]>45 || arr[4] < 1 || arr[5]>45 || arr[5] < 1) {
		printf("BAD!");
	}
	else {
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 6; j++) {
				if (arr[i] == arr[j]) {
					test = 1;
				}
			}
		}
		if (test == 1) {
			printf("BAD!");
		}
		else {
			if (result >= 81 && result <= 180) {
				for (int i = 0; i < 6; i++) {
					for (int j = 0; j < (6 - 1) - i; j++) {
						if (arr[j] > arr[j + 1]) {	// 버블 정렬 사용
							temp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}
					}
				}
				for (int i = 0; i < 5; i++) {
					printf("%d ", arr[i]);
				}
				printf("%d", arr[5]);
			}
			else {
				printf("YES");
			}
		}
	}
	return 0;
}