#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i < 10; i++)    // 0부터 99까지 증가하면서 100번 반복
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }	
    return 0;
}