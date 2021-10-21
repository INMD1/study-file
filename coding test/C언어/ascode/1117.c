#include <stdio.h>

//전역 변수 설정하기
int set = 3;
int a,ar[4][4],input[9];
int i, j;
int count = 0, temp = 0, gr = 0;

void convert() {
	for (int v = 0; v < a; v++)
	{
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (input[v] == ar[i][j]) {
					ar[i][j] = 0;
				}
			}
		}
	}
}

void checkBingo() {
	//temp 초기화
	temp = 0;
	//가로 확인
	for (i = 0; i < set; i++)
	{
		temp = 0;
		for (j = 0; j < set; j++)
		{
			if (ar[i][j] == 0) {
				temp++;
			}
		}
		//모두가 일치하면 카운트 하나 추가
		if (temp == set) {
			count++;
			temp = 0;
		}
	}
	//temp 초기화
	temp = 0;
	//세로 확인
	for (i = 0; i < set; i++)
	{
		temp = 0;
		for (j = 0; j < set; j++)
		{
			if (ar[j][i] == 0) {
				temp++;
			}
		}
		//모두가 일치하면 카운트 하나 추가
		if (temp == set) {
			count++;
			temp = 0;
		}
	}
	//temp 초기화
	temp = 0;
	//대각선 확인 (이건 수정중)
	for (int i = 0; i < set; i++)
	{
		if (ar[i][i] == 0) {
			temp++;

		}
		if (i == 2 && temp == set) {
			count++;
			temp = 0;
		}
	}
	//temp 초기화
	temp = 0;
	for (int i = 0; i < set; i++)
	{
		if (ar[i][set - i - 1] == 0) {
			temp++;

		}
		if (i == 2 && temp == set) {
			count++;
			temp = 0;
		}
	}
};


int main() {
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &ar[i][j]);
		}
	}

	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &input[i]);
	}
	convert();
	checkBingo();

	printf("%d", count);
}