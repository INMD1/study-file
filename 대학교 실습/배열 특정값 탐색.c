#include <stdio.h>
 #define size 10

int main() {
     int num[size];
     int find;
     int i;     
     for(i = 0 ; i < size ; i++){
         num[i] =i*10;
         printf("%d : %d\n", i, num[i]);
     }

     printf("검색할 수를 입력하세요 : ");
     scanf("%d", &find);

     for(i = 0 ; i < size ; i++){
         if(num[i] == find){
             printf("index: %d, value : %d\n",i,num[i]);
             break;
         }
     }

     if(i == size){
         printf("해당되는 값을 찾지 못했습니다.");
     }

     return 0;
 }
