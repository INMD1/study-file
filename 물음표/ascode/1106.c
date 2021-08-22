#include <stdio.h>
#include <string.h>

int main()
{
    int a, count = 0,c = 1, result = 0;
    char arry[1000];
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%s", &arry);
        count = strlen(arry);
        for (int i = 0; i < count / 2 - 1 ; i++)
        {
            if (count % 2  > 0){
                printf("Retry...\n");
                break;
            }
            if (arry[i] == '{' && arry[count  - c] == '}') {
                result++;
                c++;
            }
            else if (arry[i] == '(' && arry[count  - c] == ')') {
                result++;
                c++;

            }
            else if (arry[i] == '[' && arry[count  - c] == ']') {
                result++;
                c++;
            }

        }
        if (result > 0) {
            printf("Good!\n");
            c = 1;
            result = 0;
        }
        else {
            printf("Retry...\n");
            result = 0;
            c = 1;
        }
    }
    return 0;
}