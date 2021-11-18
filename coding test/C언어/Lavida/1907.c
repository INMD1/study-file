#include <stdio.h>
#include <string.h>

struct data {
	char name[16];
	int age;
	char position[21];
};

int main() {

	struct data list[16];
	int a,c,v,temp, r = 0;
	int arr[16];
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%s", &list[i].name);
		scanf("%d", &list[i].age);
		arr[i] = list[i].age;
		r += list[i].age;
		scanf("%s", &list[i].position);
	}
	
	//나이 기준 버플 함수
	for ( c = 0; c < a; c++)
	{
		for (v = 0; v < a - 1 ; v ++){
			if (arr[v] < arr[v + 1]) {
				temp = arr[v];
				arr[v] = arr[v + 1];
				arr[v + 1] = temp;
			}
		}
	}
	
	//출력
	printf("average age : %d\n", r / a);
	for (int i = 0; i < a; i++) {
		if (arr[0] == list[i].age) {
			printf("the oldest : %s %s\n", list[i].name, list[i].position);
		}
	}
	for (int i = 0; i < a; i++) {
		if (arr[a-1] == list[i].age) {
			printf("the youngest : %s %s", list[i].name, list[i].position);
		}
	}
	return 0;
}
