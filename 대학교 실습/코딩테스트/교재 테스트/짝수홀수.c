#include <stdio.h>

int main(){
    int a;
    printf("정수를 입력하세요: ");
    scanf("%d", &a);
    
    if(a % 2 == 0){
        printf("%d 은 짝수입니다", a);
    }else if(a % 2 == 1){
        printf("%d는 홀수 입니다.",a);
    }
}