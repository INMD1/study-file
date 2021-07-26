#include<stdio.h>

int main() {
	int a,result = 0, min = 0, max = 0;
    int arr[7];
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
        for (int i = 0; i < 7; i++) {
            scanf("%d", &arr[i]);
            result = result + arr[i];
        }

        min = arr[0];
        max = arr[0];

        for (int d = 0; d < 7; d++)
        {
            if (arr[d] > max) {
                max = arr[d];
            }
            if (arr[d] < min) {
                min = arr[d];
            }
        }
		printf("%d\n",(result - max - min) /5);
        result = 0, min = 0, max = 0;
	}
    return 0;
}