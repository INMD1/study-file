#include <stdio.h>
#include <string.h>
int main() {
	int a;
	char b[2000];

	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%s", &b);
		for (int o = 0; o < strlen(b); o++) {
			if (b[o] >= 'a' && b[o] <= 'z') {
				b[o] = b[o] - 32;
			}
			else if (b[o] >= 'A' && b[o] <= 'Z') {
				b[o] = b[o] + 32;
			}
		}
		printf("%s\n", b);
	}

    return 0;
}