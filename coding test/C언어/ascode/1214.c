#include <stdio.h>

//각각해주기 귀찮으니 전역변수 설정
int ar[501][501], result[1003];
int count, a, b, con = 0;
int i, j, temp;

void fix1() {
    //2차원 배열 버블함수로 정렬하기
    for (int c = 0; c < a; c++) {
        for (i = 0; i < b; i++) {
            for (j = 0; j < b - 1 - i; j++)
            {
                if (ar[c][j] < ar[c][j + 1]) {
                    temp = ar[c][j];
                    ar[c][j] = ar[c][j + 1];
                    ar[c][j + 1] = temp;
                }
            }
        }
    }
    //최하위 최상위 값 가져와서 1차원 배열에 귀속시키기
    con = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (j == 0 || j == b - 1) {
                result[con] = ar[i][j];
                con++;
            }
        }
    }

    //다시 1차원 배열에서 버블함수로 정렬하기
    for (i = 0; i < a*2; i++)
    {
        for (j = 0; j < a * 2 - 1 - i; j++)
        {
            if (result[j] < result[j + 1]) {
                temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }
}

int main() {

    scanf("%d", &count);
    for (int p = 0; p < count; p++)
    {
        //2차원 기본 정보를 입력하기
        scanf("%d %d", &a, &b);
        for (i = 0; i < a; i++)
        {
            for ( j = 0; j < b; j++)
            {
                scanf("%d", &ar[i][j]);
            }
        }

        //모든과정이 들어있는 함수
        fix1();
       
        //결과값을 출력하기
        for (i = 0; i < a*2; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
    }
    return 0;
}