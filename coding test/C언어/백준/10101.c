#include <stdio.h>

int main() {
	int a, b, c, v;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	v = a + b + c;
	if (a == 60, b == 60, c == 60){
		printf("Equilateral");
	}else if (v == 180 && a == b || b == c || a == c) {
		printf("Isosceles");
	}else if (v == 180 && a != b && b !=c && a != c) {
		printf("Scalene");
	}else if (v != 180) {
		printf("Error");}
	return 0;
}
