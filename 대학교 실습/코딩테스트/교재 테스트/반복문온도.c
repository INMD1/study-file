#include <stdio.h>

int main(){
    int a = 0, b = 0, reulst;
    printf("================================\n");
    printf("화시온도                  섭씨온도\n");
    printf("================================\n");
    for(int i = 1; i <= 11; i++){
        reulst = (a - 32) / 1.8;
        printf("%d         %d\n", a, reulst);
        a = a +10;
    }
}
