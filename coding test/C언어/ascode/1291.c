#include<stdio.h>
#include<string.h>

int main()
{
    int testcase = 0;
    scanf("%d", &testcase);
    for(int r = 0; r < testcase; r++) {
        int tmp = 0, tmp2 = 0; //after tmp recycle
        char in[5], inn[5], sum[10];
        scanf("%s %s", &in, &inn);
        for(int a = 0; a < strlen(in); a++) {
            tmp += (in[a] - 48);
        }
        for(int b = 0; b < strlen(inn); b++) {
            tmp2 += (inn[b] - 48);
        }
        sprintf(sum, "%d", tmp + tmp2);
        tmp = 0;
        for(int c = 0; c < strlen(sum); c++) {
            tmp += (sum[c] - 48);
        }
        printf("%d\n", tmp);

    }
    return 0;
}