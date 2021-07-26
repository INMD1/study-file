#include<stdio.h>
 
int main()
{
    int a, b, c, count = 0;
    int arry[100];
     
    scanf("%d", &a);
    for(int i = 1; i <= a ;i++){
    scanf("%d", &b);
     
    for(int i = 0; i < b ;i++){
        scanf("%d", &arry[i]);
    }
     
    scanf(" %d", &c);
     
    for(int i = 0; i < b ;i++){
        if( c == arry[i]){
         count++ ;
        }
    }
     
    if(count == 0){
    printf("None\n");
    }else if(count !=0){
    printf("%d\n", count);
    }
    count = 0;
     
    }
    return 0;
}