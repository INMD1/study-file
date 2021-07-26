#include <stdio.h>
#include <math.h>

int main() {
	double a, c = 100;
	char b;

	while (1)
	{
		if (c == 10) {
			printf("(경고) 연료가 10이하 입니다!\n");
			break;
		}
		else {
			printf("연로충전은 +, 소모는 -로 입력해 주세요 : ");
			scanf(" %c%lf", &b, &a);
			if (b == '-') {
				c = c - a;
			}
			else if (b == '+') {
				c = c + a;
			}
			printf("현재 남은 연료량은 %lf 입니다.\n", c);
		}
	}
}