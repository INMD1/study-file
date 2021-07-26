#include <stdio.h>
#include <math.h>

int main() {
	int count;
	int a, b, c, D;
	double v, p;
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		D = b*b - 4 * a * c;
		if (a == 0) {
			printf("No quadratic\n");
		}
		else {
			if (D > 0) {
				v = (-b + sqrt(D)) / (2.0 * a);
				p = (-b - sqrt(D)) / (2.0 * a);
				if (v > p) {
				printf("%.3f %.3f\n", v, p);
				}
				else if (v < p) {
				printf("%.3f %.3f\n", p, v);
				}
			}
			else if (D == 0) {
				v = (-b) / (2.0 * a);
				printf("%.3f\n", v);
			}
			else if (D < 0) {
				printf("Imaginary\n");
			}
		}
	}
    return 0;
}