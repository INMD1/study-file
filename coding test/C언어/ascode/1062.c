#include <stdio.h>

int main()
{
	char a;
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z') {
		printf("lowercase");
	}else if (a >= 'A' && a <= 'Z') {
		printf("uppercase");
	}else if (a >= '0' && a <= '9') {
		printf("number");
	}else {
		printf("special");
	}

	
    return 0;
}