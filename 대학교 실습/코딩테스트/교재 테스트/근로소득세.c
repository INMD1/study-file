#include <stdio.h>

int main(){
    int a, result = 0;
    printf("과세 표준을 입력하시오(만원): ");
    scanf("%d", &a);

    if( a <= 1000){
        result = a * 0.08;   
    }else if(a > 1000 && a <= 4000){
        result = a * 0.17;   
    }else if(a > 4000 && a<= 8000){
        result = a * 0.26; 
    }else{
        result = a * 0.35; 
    }
    printf("소득세는 %d입니다", result);
}