#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
	int test, a;
	char arr[101];
	scanf("%d", &test);
	for (int i = 0; i < test; i++){
		int num;
		scanf("%s", arr);
		num = strlen(arr);
		for (int i = 0; i < num; i++)
		{
			if (isupper(arr[i]) != 0) {
				arr[i] -= 20;
			}
			else if (islower(arr[i]) != 0) {
				switch (arr[i])
				{
				case 'a':
					arr[i] = '!';
					break;
				case 'e':
					arr[i] = '#';
					break;
				case 'i':
					arr[i] = '$';
					break;
				case 'o':
					arr[i] = '%';
					break;
				case 'u':
					arr[i] = '&';
					break;
				default:
					if (arr[i] <= 109) {
						arr[i] -= 5;
					}
					else if (arr[i] >= 110) {
						arr[i] += 3;
					}
					break;
				}
			}
		}
		for (int i = 0; i < num; i++)
		{
			printf("%c", arr[i]);
		}
		printf("\n");
	}
	return 0;
}