#include<stdio.h>

int main()
{
    int testcase = 0;
    int num = 0, a = 1;
    scanf("%d", &testcase);
ONE:
    scanf("%d", &num);
    printf("Case #%d:\n", a);
    for(int i = 0; i < num; i++) {
        for(int e = 0; e < i + 1; e++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = num - 1; i > 0; i--) {
        for(int e = 0; e < i; e++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    //for 대신 담당한다
    testcase--;
    a++;
    if(testcase == 0) {
        goto EXIT;
    } else {
        goto ONE;
    }
EXIT:
    return 0;
}