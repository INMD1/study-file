#include <stdio.h>

int main() {
    while(1) {
        int data[1001],COUNT = 0,temp = 0;
        scanf("%d", &COUNT);
        if(COUNT != 0) {
            for(int i = 0; i < COUNT; i++) {
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
            if((data[0]-data[COUNT-1])%2==0) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        } else {
            return 0;
        }
    }
    return 0;
}