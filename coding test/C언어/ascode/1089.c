#include <stdio.h>

int main()
{
    int a,b,c,d = 0,e,f,temp = 0,count = 1,arr[100000];
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        if (b > c) { e = c; f = b; }
        else { e = b; f = c;}
        for (int i = e; i <= f; i++)
        {
            temp = i;
            for (;;) {
                if (temp == 1) {
                    break;
                }
                if ((temp % 2) == 0) {
                    temp = temp / 2;
                    count++;
                }
                else if ((temp % 2) != 0) {
                    temp = temp * 3 + 1;
                    count++;
                }
            }
            arr[d] = count;
            d++;
            count = 1;
        }
        temp = 0;
        //내림차순 정렬
        for (int i = 0; i <= d - 1; i++)
        {
            for (int j = 0; j < d - 1 - i; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        printf("%d %d\n", arr[0], arr[d - 1]);
        temp = 0;
        d = 0;
        }
    }