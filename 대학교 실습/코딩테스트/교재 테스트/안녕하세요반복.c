#include <stdio.h>

int main() {
    int a;
    printf("몇번이나 반복 할까요 : ");
    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        printf("안녕하세요\n");
    }
}