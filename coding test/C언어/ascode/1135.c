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
        // 속임수 ^^
        x = 0, y = 0;
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
        }
        printf("%d %d\n", x, y);
    }
    return 0;
}