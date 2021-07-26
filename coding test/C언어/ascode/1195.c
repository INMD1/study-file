#include <stdio.h>

int main() {
	int a,z;
	int b,c,d,e,f,g;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d %d %d %d %d %d", &b ,&c, &d, &e, &f, &g);
		if (b <= 45|| c <= 45 || d <= 45 || e <= 45 || f <= 45|| g <= 45) {
			z = b + c + d + e + f + g ;
			if (z > 81 && z < 180) {
				printf("GOOD\n");
			}
			else {
				printf("NOT GOOD\n");
			}
		}else {
			printf("NOT GOOD\n");
		}
		}
    return 0;
}
