#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int testcase = 0;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++) {
        char arr[40];
        scanf("%s", &arr);
        for (int i = 0; i < strlen(arr); i++)
        {
            if (isdigit(arr[i])) {
                printf("%c", arr[i]);
            }
            else {
                printf(" %c", arr[i]);
            }

        }
        printf("\n");
    }
    return 0;
}