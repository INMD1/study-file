#include <stdio.h>
#include <string.h>

int main() {
	int a;
	int b = 0, c = 0;
	char x[200];
	scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        scanf("%s", &x);
        for (int i = 0; i < strlen(x); i++)
        {

            if (x[i] == '1') {
                c++;
            }
            else if (x[i] == '2') {
                b++;
                c++;
            }
            else if (x[i] == '3') {
                b++;
            }
            else if (x[i] == '4') {
                b++;
                c--;
            }
            else if (x[i] == '5') {
                c--;
            }
            else if (x[i] == '6') {
                b--;
                c--;
            }
            else if (x[i] == '7') {
                b--;
            }
            else if (x[i] == '8') {
                b--;
                c++;
            }
        }
        printf("%d %d\n", b, c);
    }
    return 0;
}
