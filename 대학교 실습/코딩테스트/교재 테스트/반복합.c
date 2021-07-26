#include <stdio.h>

int main() {
    int a,result = 0;
    while(1){
        printf("정수를 입력하세여: ");
        scanf("%d", &a);
        result = result + a ;

        if(a == 0){
        printf("합계: %d\n", result);
        return 0;
    }
    }
}