#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Bingo[5][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
void printBoard()
{
	int i, j;
	printf("┌───┬───┬───┬───┬───┐\n");
	for (i = 0; i < 5; i++)
	{
		printf("│");
		for (j = 0; j < 5; j++)
		{
			if (Bingo[i][j] >= 10) {
				printf(" %d│", Bingo[i][j]);
			}
			else if (Bingo[i][j] == 0) {
				printf(" ▼ │");
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
void checkBingo() {

};

//빙고 5*5
int main(void)
{
	int input, line = 0;
	printBoard(); // 게임판 출력

	while (1)
	{
		printf("지울 번호를 입력하시오: ");
		scanf("%d", &input);

		deletNumber(input);

		printBoard(); // 게임판 출력

		//line = checkBingo();

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
			break;
		}
	}
	return 0;
}
