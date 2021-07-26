#include <stdio.h>
#include <string.h>

int main()
{
	int a, b, v;
	char c[81];
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		
		b = 1, v = 0;
		scanf("%s", &c);

		for (int j = 0; j < strlen(c); j++) {
			if (c[j] == 'O') {
				v += b;
				b++;
			}
			else{
				b = 1;
			}
			
		}
		printf("%d\n", v);
	}
}