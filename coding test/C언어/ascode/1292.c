#include<stdio.h>

int main()
{
    int testcase = 0;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++) {
        int jul[1001];
        int person = 0, total = 0, avg = 0;
        scanf("%d", &person);
        for(int r = 0; r < person; r++) {
            scanf("%d", &total);
            jul[r] = total;
            avg += total;
        }
        total = 0;
        avg = avg / person;
        for(int r = 0; r < person; r++) {
            if(avg < jul[r]) {
                total++;
            }
        }
        printf("%d from total %d\n", total, person);
    }
    return 0;
}