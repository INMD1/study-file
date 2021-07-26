#include <stdio.h>

int main()
{
    int num[9], max, c = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d",&num[i]);
    }
    max = num[0];
   for (int i = 0; i < 9; i++) {
 

       if (max < num[i]){
           max = num[i];
           c = i;
       }
   } 

   printf("%d\n", max);
   printf("%d", c + 1);
  

    return 0;
}
