#include <stdio.h>

int main(){
	int a = 1, max = 0 ,min = 0, result = 0;
	int arr[50];


	while (a != 0)
	{

		scanf("%d", &a);

		for (int i = 0; i < a; i++) {
			scanf("%d", &arr[i]);
		}

		min = arr[0];
		max = arr[0];

		for (int d = 0; d < a; d++)
		{
			if (arr[d] > max) {
				max = arr[d];
			}
			if (arr[d] < min) {
				min = arr[d];
			}
		}

		result = max - min;

		if (a == 0) {
			break;
		}
		else if(a !=0){
			if (result % 3 == 0 && result != 0) {
				printf("Yes\n");
			}
			else if (result == 0) {
				printf("Same\n");
			}
			else {
				printf("No\n");
			}
		}
	} 
    return 0;
}