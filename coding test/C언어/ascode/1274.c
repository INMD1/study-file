#include<stdio.h>

int main()
{
    int testcase = 0;
    while(1) {
        int COUNT, data[1001],temp = 0;
        scanf("%d", &COUNT);
        if(COUNT == 0) {
            return 0;
        } else {
            for(int c = 0; c < COUNT; c++) {
                scanf("%d", &data[c]);
            }
            for (int i = 0; i < COUNT - 1; i++)
            {
                for (int j = 0; j < COUNT - 1 - i; j++)
                {
                    if (data[j] > data[j + 1])
                    {
                        temp        = data[j];
                        data[j]     = data[j + 1];
                        data[j + 1] = temp;
                    }
                }
            }
            temp = 0;
            for(int c = 0; c < COUNT; c++) {
                if(data[COUNT - 1] == data[c]) {
                    temp++;
                }
            }
            printf("MAX: %d, Count: %d\n", data[COUNT - 1], temp);
        }
    }
    return 0;
}