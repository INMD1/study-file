#include <stdio.h>
#include <string.h>
 
int main() {
    int a;
    int b = 0, c = 0, count = 0;
    char x[200];
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        scanf("%s", &x);
 
        for (int i = 0; i < strlen(x); i++)
        {
            if (x[i] == '9' || x[i] == '0')
            {
                count = 0;
                break;
            }
            else
            {
                if (x[i] == '1') {
                    c++;
                    count++;
                }
                else if (x[i] == '2') {
                    b++;
                    c++;
                    count++;
                }
                else if (x[i] == '3') {
                    b++;
                    count++;
                }
                else if (x[i] == '4') {
                    b++;
                    c--;
                    count++;
                }
                else if (x[i] == '5') {
                    c--;
                    count++;
                }
                else if (x[i] == '6') {
                    b--;
                    c--;
                    count++;
                }
                else if (x[i] == '7') {
                    b--;
                    count++;
                }
                else if (x[i] == '8') {
                    b--;
                    c++;
                    count++;
                }
 
            }
        }
        if (count > 0) {
            printf("%d %d\n", b, c);
        }
        else if(count == 0) {
            printf("WRONG!\n");
        }
        count = 0;
    }
    return 0;
}
 