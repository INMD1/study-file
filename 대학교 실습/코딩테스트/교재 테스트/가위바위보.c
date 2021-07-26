#include <stdio.h>

int main(){
    int a,b;
    printf("가위, 바위, 보 게임에 오신 것을 환영합니다.\n");
    printf("하나를 선택하세요(가위 = 0, 바위 = 1, 보 = 2\n");
    scanf(" %d", &a);
    b = rand() % 3;

    if((a+1) % 3 == b){
        printf("컴퓨터 승리");
    }else if(a == b){
        printf("비김");
    }else{
        printf("사용자 승리");
    }
}