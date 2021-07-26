#include <stdio.h>

int main() {
	int N, X;
	int c;

	scanf("%d""%d", &N, &X);
	for (int i = 0; i < N; i++) {
		scanf("%d", &c);
		if (X > c) {
			printf("%d ", c);
		}

	}
}
