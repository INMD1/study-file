#include <stdio.h>
#include <string.h>

int main(){
	int testcase;
  scanf("%d", &testcase);

  for(int i = 0; i < testcase; i ++){
    int a, b, temp;
    char tempc[30];
    scanf("%d %d", &a, &b);
    temp = a + b;
    for(;;){
      if(temp / 10 == 0){
        break;
      }else{
        sprintf(tempc, "%d", temp);
        temp = 0;
        for(int i = strlen(tempc) -1 ; i >= 0; i--){
          temp += (tempc[i] - 48);
        }
      }
    }

    printf("%d\n", temp);
  }
  
}