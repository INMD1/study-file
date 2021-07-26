#include <stdio.h>



int main() {

	int a, b, c;

	int D;



	scanf("%d %d %d", &a, &b, &c);

	D = b * b - (4 * a * c);

	if (D > 0) {

		printf("1");

	}

	else if(D == 0) {

		printf("0");

	}

	else if (D < 0) {

		printf("-1");

	}

    return 0;
}