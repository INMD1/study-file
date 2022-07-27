#include<stdio.h>

int main()
{
    int testcase = 0;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++) {
        int input =0, output[5] = {0, };
        int set[5] = {10000,5000,1000,500,100};
        scanf("%d", &input);

        if(input != 0) {
            for(int i = 0; i < 5; i++) {
                output[i] = input / set[i];
                input = input % set[i];
            }
            if(input == 0) {

                printf("BILL : %d %d %d, COIN : %d %d\n", output[0], output[1], output[2], output[3], output[4]);
            } else {
                printf("Sorry\n");
            }
        } else {
            printf("Sorry\n");
        }
    }
    return 0;
}