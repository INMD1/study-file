#include <stdio.h>

int main(void){
	int testcase;
	int arr[101], a, j, temp = 0, count = 0;
	scanf("%d", &testcase);
	for (int c = 0; c < testcase; c++)
	{
		scanf("%d", &a);
		for (int i = 0; i < a; i++)
		{
			scanf("%d", &arr[i]);
			if (arr[i] % 2 == 1) {
				count++;
			}
		}

		for (int i = 0; i < a; i++)    
		{
			for (int j = 0; j < a - 1; j++)   
			{
				if (arr[j] < arr[j + 1])          
				{                                
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;            
				}
			}
		}

		if (count == 0) {
			printf("None\n");
		}else {
			for (int i = 0; i < a; i++)
			{
				if (arr[i] % 2 == 1 && arr[i] > 0)
					printf("%d ", arr[i]);
			}
			printf("\n");
		}
		temp = 0, count = 0;
	}
}