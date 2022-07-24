#include<stdio.h>
#include<math.h>
int main()
{
    int testcase = 0;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++) {
        int data[101] = {0, },COUNT = 0,temp = 0;
        double result = 0;
        scanf("%d", &COUNT);
        for(int i =0; i<COUNT; i++) {
            scanf("%d", &data[i]);
        }
        for (int i = 0; i < COUNT - 1; i++)
        {
            for (int j = 0; j < COUNT - 1 - i; j++)
            {
                if (data[j] < data[j + 1])
                {
                    temp        = data[j];
                    data[j]     = data[j + 1];
                    data[j + 1] = temp;
                }
            }
        }

        for(int i =0; i<5; i++) {
            result += (double)data[i];
        }
        result = result/5;
        printf("%0.1lf\n", ceil(result*100)/100);
    }
    return 0;
}