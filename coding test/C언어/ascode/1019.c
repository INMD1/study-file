#include <stdio.h>
#include <string.h>
int main() {
	int a, count;
	char arr[1024];
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%s", &arr);	
		count = strlen(arr);
		for (int i = 0; i < count; i++)
		{
			if (arr[i] <= 90 & arr[i] >= 65) {
				if (arr[i] == 90) {
					arr[i] = 65;
				}
				else {
					arr[i]++;
				}
			}

		}
		printf("%s\n", arr);

	}
    return 0;
}