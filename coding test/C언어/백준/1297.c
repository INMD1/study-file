#include <stdio.h>
#include <math.h>
int main() {
	double a, b, c, result = 0;
	scanf("%lf %lf %lf", &a, &b, &c);
	result = a / sqrt(b*b + c*c);
	printf("%d %d", (int)(b * result) , (int)(c * result));
	return 0;
}