#include <stdio.h>
#include <string.h>

int main(){
	int testcase;
  scanf("%d", &testcase);

  for(int i = 0; i < testcase; i ++){
    int X = 0,  Y = 0;
    char input[51];
    scanf("%d %d", &X, &Y);
    scanf("%s", &input);

    for(int i = 0; i < strlen(input); i++){
        if(input[i] == 'L'){
          X--;
        }else if(input[i] == 'R'){
          X++;
        }else if(input[i] == 'U'){
          Y++;
        }else if(input[i] == 'D'){
          Y--;
        }
    }

    printf("%d %d\n", X, Y);
  }
  
}