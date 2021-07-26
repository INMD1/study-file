#include<stdio.h> 
#include<math.h>

int main()
{
	int a;
	double b;
	scanf("%d", &a);
	b = 3 * sqrt(3) * pow(a, 2) / 2;
	printf("%.8f", b);
    return 0;
}
