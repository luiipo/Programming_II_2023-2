// 011_power.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;

    printf("자연수 입력 : ");
    scanf_s("%d", &n);

    /*int i, pow;
    for (i = 1, pow = 1; i <= n; i++, pow *= 2)
        printf("2의 %d제곱은 %d\n", n, pow);

    int pow = 1;

    for (int i = 0; i < n; i++)
        pow *= 2;

    printf("2의 %d승은 %d\n", n, pow);
    */
    int pow = 1;
    for (int i = 1; i <= n; i++)
    {
        pow *= 2;
        printf("2의 %d제곱 = %d\n", n, pow);
    }
}

