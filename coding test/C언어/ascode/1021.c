#include <stdio.h>
int main() {
    int a, b, count = 0, week = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        for (; ;)
        {
            if (b > 0) {
                b = b - 9500 * 6;
                count++;
            }
            else if(b <= 0){
                break;
            }
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}