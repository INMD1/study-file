#include <stdio.h>

int main(){
    int a,b, max , min;
    printf("정수를 입력하시오: ");
    scanf("%d", &a);
    printf("정수를 입력하시오: ");
    scanf("%d", &b);

    if(a > b){
        max = a;
        min = b;
    }else if(a < b){
        max = b;
        min = a;
    }

    printf("두수의 합은 %d 입니다.\n", max+min);
    printf("두수의 차은 %d 입니다.\n", max-min);

}