#include <stdio.h>
int main() {
    int a , b;
    int c;
    scanf("%d", &c);
    for (int i = 0; i < c; i++)    // 0부터 99까지 증가하면서 100번 반복
    {
        scanf("%d""%d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
    }	
}
