#include <stdio.h>

int main() {
    int a, o = 1;
    int A = 0, B = 0, C = 0, D = 0, F = 0;
    int arr[100];


    while (1)
    {
        scanf("%d", &a);
        if (a == 0) {
            return 0;
        }else{
            for (int i = 0; i < a; i++)
            {
            scanf("%d", &arr[i]);
            }
            for (int i = 0; i < a; i++)
            {
                if (arr[i] <= 100 && arr[i] >= 90) {
                    A++;
                }
                else if (arr[i] <= 89 && arr[i] >= 80)
                {
                    B++;
                }
                else if (arr[i] <= 79 && arr[i] >= 70)
                {
                    C++;
                }
                else if (arr[i] <= 69 && arr[i] >= 60)
                {
                    D++;
                }
                else if (arr[i] <= 59 && arr[i] >= 0)
                {
                    F++;
                }
            }
            printf("<%d>\n", o);
            printf("A : %d\n", A);
            printf("B : %d\n", B);
            printf("C : %d\n", C);
            printf("D : %d\n", D);
            printf("F : %d\n", F);
            printf("\n");
            o++;
            A = 0, B = 0, C = 0, D = 0, F = 0;
        }
    }
    return 0;
}
