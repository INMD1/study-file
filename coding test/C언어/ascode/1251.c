#include<stdio.h>
#include<string.h>
#include <math.h>

int main()
{
    int testcase = 0;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
      char body[10]; int num = 0, test = 0;
      scanf("%s", &body);
      for(int c = strlen(body) - 1; c >= 0; c--){
          printf("%d\n", body[test] - 48);
          num += ((body[test] - 48) * pow(2,c));
          test++;
      }
      printf("%d\n", num);
    }
    return 0;
}