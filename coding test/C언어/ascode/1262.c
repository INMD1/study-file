#include<stdio.h>

int main()
{
    int testcase = 0;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++) {
    int COUNT, data[101] = {0, }, temp = 0;
        scanf("%d", &COUNT);
        for(int c = 0; c < COUNT; c++){
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
        for(int c = 0; c < COUNT; c++){
            if(data[c] != data[c+1]){
             printf("%d ", data[c]);
            }
        }
        printf("\n");
    }
    return 0;
}