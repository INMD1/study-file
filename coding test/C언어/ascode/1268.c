#include<stdio.h>

int main()
{
    int testcase = 0;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++) {
        int arr[5] = { 10000,5000,1000,500,100};
        int input = 0;
        scanf("%d", &input);
        for(int i = 0; i < 5; i++) {
            arr[i] = input / arr[i];
            input = input % arr[i];
        }
        printf("temp %d\n", input);
        if(input>1) {
            printf("BILL : %d %d %d, COIN : %d %d\n", arr[0],arr[1],arr[2],arr[3],arr[4]);
        }else{
            printf("Sorry\n");
        }
    }
    return 0;
}