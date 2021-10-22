#include <stdio.h>

int main() {
	int a, arr[8],count = 0, result = 0;
	int tmp, c, j;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		// 값을 받아오기
		for (int i = 0; i < 7; i++)
		{
			scanf("%d", &arr[i]);
		}

		// 내림차순
		for (c = 0; c < 7; c++)
		{
			for (j = 0; j < 6; j++)
			{
				if (arr[j] > arr[j + 1]) {
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
		
		// 차이값
		result = arr[6] - arr[0];

		//차이값 비교후 출력
		if (result > 5) {
			for (int i = 2; i < 5; i++) {
				count = count + arr[i];
			}
			printf("%d\n", count / 3);
		}
		else {
			for (int i = 1; i < 6; i++) {
				count = count + arr[i];
			}
			printf("%d\n", count / 5);
		}
		count = 0;
	}
	return 0;
}