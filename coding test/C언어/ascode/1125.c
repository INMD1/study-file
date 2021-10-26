#include <stdio.h>
 
int main(void)
{
    int testcase;
    int ar[3][3],set = 3;
    int temp1,temp2, i, j, count = 0;
    int x = 0, y = 0;

    scanf("%d", &testcase);
    
    for (int o = 0; o < testcase; o++)
    {
        int b, c;
        for ( b = 0; b < 3; b++)
        {
            for (c = 0; c < 3; c++)
            {
                scanf("%d", &ar[b][c]);
            }
        }
        //temp 초기화
        temp1 = 0;
        for (int v = 1; v <= 2; v++)
        {
            //가로 확인
            for (i = 0; i < set; i++)
            {
                temp1 = 0;
                for (j = 0; j < set; j++)
                {
                    if (ar[i][j] == v) {
                        temp1++;
                    }
                }
                //모두가 일치하면 카운트 하나 추가
                if (v == 1) {
                    if (temp1 == set) {
                        x++;
                        temp1 = 0;
                    }
                }
                else if ( v == 2) {
                    if (temp1 == set) {
                        y++;
                        temp1 = 0;
                    }
                }
            }
        }
        for (int v = 0; v <= 2;v++)
        {
            for (i = 0; i < set; i++)
            {
                temp1 = 0;
                for (j = 0; j < set; j++)
                {
                    if (ar[j][i] == v) {
                        temp1++;
                    }
                }
                if (v == 1) {
                    if (temp1 == set) {
                        x++;
                        temp1 = 0;
                    }
                }
                else if (v == 2) {
                    if (temp1 == set) {
                        y++;
                        temp1 = 0;
                    }
                }
            }
        }
        //대각선 확인 (이건 수정중)
        //temp 초기화
        temp1 = 0;
        for (int i = 0; i < set; i++)
        {
            if (ar[i][i] == 1) {
                temp1++;
 
            }
            if (i == 2 && temp1 == set) {
                x++;
                temp1 = 0;
            }
        }
        //temp 초기화
        temp1 = 0;
        for (int i = 0; i < set; i++)
        {
            if (ar[i][set - i - 1] == 1) {
                temp1++;
            }
            if (i == 2 && temp1 == set) {
                x++;
                temp1 = 0;
            }
        }
        //대각선 확인 (이건 수정중)
        //temp 초기화
        temp2 = 0;
        for (int i = 0; i < set; i++)
        {
            if (ar[i][i] == 2) {
                temp2++;
 
            }
            if (i == 2 && temp2 == set) {
                y++;
                temp2 = 2;
            }
        }
        //temp 초기화
        temp2 = 0;
        for (int i = 0; i < set; i++)
        {
            if (ar[i][set - i - 1] == 2) {
                temp2++;
 
            }
            if (i == 2 && temp2 == set) {
                y++;
                temp2 = 2;
            }
        }
        if (x != 0) {
            printf("1\n");
        }
        else if (y != 0) {
            printf("2\n");
        }
        else {
            printf("draw!\n");
        }
        x = 0, y = 0;
    }
    return 0;
}