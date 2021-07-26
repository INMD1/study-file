//#include <stdio.h>

// 문제 조건없이 하면
/*
int main() {
	int data[10] = { 1,2,3,4,5,6,7,8,9 };
	int count = 0;
	for (int i = 0; i <10; i++) {
		printf("%d ", data[i]);
		count = count + data[i];
	}
	printf("\n");
	printf("배열의 요소의 합 = %d\n", count);
}
*/

// 문제에 있는 대로 작성하면
/*
int get_array_sum(int* A, int size) {
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(A + i));
		count = count + *(A + i);
	}
	printf("\n");
	printf("배열의 요소의 합 = %d\n", count);
	return 0;
}

int main() {
	int data[10] = { 1,2,3,4,5,6,7,8,9 };

	get_array_sum(data, 10);

	return 0;
}
*/