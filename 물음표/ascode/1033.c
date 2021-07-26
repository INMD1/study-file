#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int a, c, o = 0;
    char b[2000];
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%s", &b);
        for (int i = 0; i < strlen(b); i++)
        {
            if (b[o] >= 'a' && b[o] <= 'z') {
                b[o] = toupper(b[o]);
            }
            else if (b[o] >= 'A' && b[o] <= 'Z') {
                b[o] = tolower(b[o]);
            }
            o++;
        }
        fprintf(stdout, "%s\n", b);
        o = 0;
    }
}

// 박친다