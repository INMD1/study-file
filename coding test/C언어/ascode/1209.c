#include<stdio.h>
 
int main(void) {
 
    int min, max;
    int a;
    int arr[1000];
    while (1)
    {
        scanf("%d", &a);
        if (a == 0) {
            return 0;
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                scanf("%d", &arr[i]);
            }
 
            min = arr[0];
            max = arr[0];
 
            for (int i = 0; i < a; i++)
            {
                if (arr[i] > max) {
                    max = arr[i];
                }else if (arr[i] < min) {
                    min = arr[i];
                }
            }
            printf("%d %d\n", max, min);
 
        }
    }
    return 0;
}