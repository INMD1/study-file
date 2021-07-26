#include <stdio.h>

int main(){
    int a,b, result;
    printf("중간 고사 점수를 입력해 주세요 : ");
    scanf("%d", &a);

    printf("기말 고사 점수를 입력해 주세요 : ");
    scanf(" %d", &b);

    result = (a+b)/2;

    if(result >= 90){
        printf("A");
    }else if(result >= 80){
        printf("B");
    }else if(result >= 70){
        printf("C");
    }else if(result >= 60){
        printf("D");
    }else{
        printf("F");
    }
    
}