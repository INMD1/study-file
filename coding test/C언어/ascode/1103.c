#include <stdio.h>
int count = 0;
void  check(int n, char a, char b, char c) {
    if (n == 1) {
        printf("원판 1을 %c 에서 %c로 옮긴다\n", a, c);
        count++;
    }
    else {
        check(n - 1, a, c, b);
        printf("원판 %d를 %c 에서 %c로 옮긴다\n", n, a, c);
        check(n - 1, b, a, c);
        count++;
    }
}

int main()
{
    int a, b, c;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        check(b, 'A', 'B', 'C');
        c = count;
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}