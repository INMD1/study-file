#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, re;
    int temp1, temp2;
    scanf("%d", &re);
    for (int i = 0; i < re; i++)
    {
        int count = 0;
        char arr[100] = { "0", }, arr1[100] = { "0", };
        scanf("%s", &arr);
        scanf("%s", &arr1);
        a = strlen(arr);
        b = strlen(arr1);
        if (a > b) {
            for (int i = 0; i < a; i++)
            {
                if (arr[i] != 0 && arr1[i] != 0) {
                    temp1 = arr[i] - 64;
                    temp2 = arr1[i] - 64;

                }
                else if (arr[i] != 0 && arr1[i] == 0) {
                    temp1 = arr[i] - 64;
                    temp2 = arr1[i];
                }
                else if (arr[i] == 0 && arr1[i] != 0) {
                    temp1 = arr[i];
                    temp2 = arr1[i] - 64;

                }
                if (temp1 > temp2) {
                    count = count + ((temp1 - temp2) * (temp1 - temp2));
                }
                else if (temp1 < temp2) {
                    count = count + ((temp2 - temp1) * (temp2 - temp1));

                }
            }
        }
        else {
            for (int i = 0; i < b; i++)
            {
                if (arr[i] != 0 && arr1[i] != 0) {
                    temp1 = arr[i] - 64;
                    temp2 = arr1[i] - 64;

                }
                else if (arr[i] != 0 && arr1[i] == 0) {
                    temp1 = arr[i] - 64;
                    temp2 = arr1[i];
                }
                else if (arr[i] == 0 && arr1[i] != 0) {
                    temp1 = arr[i];
                    temp2 = arr1[i] - 64;

                }

                if (temp1 > temp2) {
                    count = count + ((temp1 - temp2) * (temp1 - temp2));
                }
                else if (temp1 < temp2) {
                    count = count + ((temp2 - temp1) * (temp2 - temp1));

                }
            }
        }
        if (a > b) {
            printf("%d\n", count/a);

        }
        else {
            printf("%d\n", count/b);
        }
        count = 0;
    }
    return 0;
}