#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int set = 5;
int Bingo[5][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
//위코드는 절대로 건들지 말것

void random() {
	int a = set * set;
	int input;
	srand(time(NULL));
	for (int o = 0; o < 25; o++)
	{
		int j[4];
		int temp;
		for (int i = 0; i < 4; i++)
		{
			j[i] = rand() % set;
		}
		temp = Bingo[j[0]][j[1]];
		Bingo[j[0]][j[1]] = Bingo[j[2]][j[3]];
		Bingo[j[2]][j[3]] = temp;
	}
}
void printBoard()
{
	int i, j;
	printf("┌───┬───┬───┬───┬───┐\n");
	for (i = 0; i < set; i++)
	{
		printf("│");
		for (j = 0; j < set; j++)
		{
			if (Bingo[i][j] >= 10) {
				printf(" %d│", Bingo[i][j]);
			}
			else if (Bingo[i][j] == 0) {
				printf(" X │");
			}
			else
			{
				printf(" %d │", Bingo[i][j]);
			}
		}
		printf("\n");
		if (i != 4) {
			printf("├───┼───┼───┼───┼───┤\n");
		}
	}
	printf("└───┴───┴───┴───┴───┘\n");
}
void deletNumber(int number)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (Bingo[i][j] == number)
			{
				Bingo[i][j] = 0;
			}
		}
		printf("\n");
	}
}
int checkBingo() {
	int count = 0, temp = 0, gr = 0;
	int i, j;
	//temp 초기화
	temp = 0;
	//가로 확인
	for (i = 0; i < set; i++)
	{
		temp = 0;
		for (j = 0; j < set; j++)
		{
			if (Bingo[i][j] == 0) {
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
			if (Bingo[j][i] == 0) {
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
		if (Bingo[i][i] == 0) {
			temp++;

		}
		if (i == 4 && temp == set) {
			count++;
			temp = 0;
		}
	}
	//temp 초기화
	temp = 0;
	for (int i = 0; i < set; i++)
	{
		if (Bingo[i][set - i - 1] == 0) {
			temp++;

		}
		if (i == 4 && temp == set) {
			count++;
			temp = 0;
		}
	}
	return count;
};

//빙고 5*5
int main(void)
{
	int input, line = 0;
	random();// 게임판 제작
	printBoard(); // 게임판 출력

	while (1)
	{
		printf("지울 번호를 입력하시오: ");
		scanf("%d", &input);

		deletNumber(input);

		printBoard(); // 게임판 출력

		line = checkBingo();

		if (line == 1)
		{
			printf("1줄빙고\n");
		}
		else if (line == 2)
		{
			printf("2줄빙고\n");
		}
		else if (line >= 3)
		{
			printf("3줄빙고\n");
			printf("게임이 끝났습니다!");
			break;
		}
	}
	return 0;
}