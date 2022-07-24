#include <stdio.h>
#include <stdlib.h>
int main()
{
    int testcase = 0;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++) {
        char num[4], temp = 0;
        int before = 0, after = 0;
        scanf("%s", &num);
        before = atoi(num);
        for (int i = 0; i < 4/2; i++)
        {
            temp = num[i];
            num[i] = num[3-i];
            num[3-i] = temp;
        }
        after = atoi(num);
        if(after > before){
            printf("%d\n", after);
        }else if(after < before){
            printf("%d\n", before);
        }
    }
    return 0;
}