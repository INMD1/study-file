#include <stdio.h>
#include <math.h>

int main() {
	int b = 0;
	char a;

	while (1)
	{
		printf("문자를 입력하시오(종료 .) : ");
		scanf(" %c", &a);
		if (a == 'a') {
			b++;
		}
		else if (a == '.') {
			printf("a의 개수=%d", b);
			return 0;
		}

	}
}