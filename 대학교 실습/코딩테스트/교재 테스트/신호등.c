#include <stdio.h>

int main(){
    char a;
    printf("신호등의 색깔 입력 (r, g, y): ");
    scanf("%c", &a);

    if(a == 'r'){
        printf("정지\n");
    }else if(a == 'g'){
        printf("경고\n");
    }else if(a == 'y'){
        printf("진행\n");
    }
}