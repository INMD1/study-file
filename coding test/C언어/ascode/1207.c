#include<stdio.h>
#include<math.h>
int main(void) {

	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		double b = 0;
		scanf("%lf", &b);
		printf("%.5f\n", sqrt(3) / 4 * pow(b, 2));
	}

    return 0;
}
