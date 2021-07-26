#include<stdio.h>

int main()
{
    int a, results = 0;
    int arry[1500], arr[3];

    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arry[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &arr[i]);
    }
 

    for (int i = 0; i < a; i++) {
        if (arr[0] > arr[1]) {
            if (arr[0] >= arry[i] && arry[i] >= arr[1]) {
                results++;
            }
        }
        else if (arr[0] < arr[1]) {
            if (arr[1] >= arry[i] && arry[i] >= arr[0]) {
                results++;
            }
        }
        }
    printf("%d", results);
    return 0;
}