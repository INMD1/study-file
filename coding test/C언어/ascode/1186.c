#include <stdio.h> 

int main() {
    int a , b = 0, arr[4];
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        b = 0;
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] >= 65 && arr[i] <= 90) {
                b++;
            }
        }

        if (b == 3) {
            printf("%c%c%c\n", arr[0], arr[1], arr[2]);
        }
        else {
            printf("No Uppercase!\n");
        }
    }
    return 0;
}