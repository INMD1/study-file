#include <stdio.h>
#include <string.h>
 
int main() {
    int a,result = 0;
    int x, y;
    char arr[101];
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d", &x, &y);
        scanf("%s", &arr);
        for (int i = 0; i < strlen(arr); i++)
        {
            switch (arr[i])
            {
            case 'L':
                x--;
                break;
            case 'R':
                x++;
                break;
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;
            default:
                break;
            }
            if (-30 > x || x > 30  || -60 > y || y > 60) {
                result++;
                printf("invalid\n");
                break;
            }
        }
        if (result != 1) {
            printf("%d %d\n", x, y);
        }
        result = 0;
    }
    return 0;
}