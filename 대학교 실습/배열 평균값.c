#include <stdio.h>
#define size 5

int main(){
    int score[size];
    int sum = 0;
    float reuslt;
    for(int i = 0 ; i< size ; i++){
        printf("학생의 성적을 입력해주세요:");
        scanf("%d\n", &score[i]);
        sum += score[i];
    } 
    reuslt = sum/size;
    printf("학생 총합 %d\n", sum);
    printf("학생 평균값 %.2f", reuslt);
}