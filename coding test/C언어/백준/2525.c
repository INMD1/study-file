#include <stdio.h>

int main() {
	int a, b,c;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);
	b = b + c;
	if(b < 60){
		if (a == 24) { printf("0 %d", a, b); }
		else if (a > 24) { printf("0 %d", a - 24, b); }
		else { printf("%d %d", a, b); }
	}
	else if (b >= 60) {
		while (1)
		{
			b = b - 60;
			a++;
			if (b < 60){break;}
		}
		if (a == 24) {printf("0 %d", b);}
		else if (a > 24) { printf("%d %d", a - 24, b); }
		else {printf("%d %d", a , b);}
	}
	return 0;
}
