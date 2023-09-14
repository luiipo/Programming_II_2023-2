
#include <stdio.h>
// 반 피라미드 그리기
// 1. n줄 그린다
// 2. 각 줄에서는 바깥 루프의 i개 만큼 그린다
int main()
{
    int n;
    printf("n을 입력 : ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) { // 몇 번째 줄
        for (int j = 1; j <= i; j++) // i개만큼 *을 그린다
            printf("*");

        printf("\n");
    }


    // 피라미드 그리기
    //      *
    //     ***

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    // 반피라미드2
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(".");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }



    for (int i = 1; i <= n; i++) { // 몇 번째 줄
        for (int j = 1; j <= i - 1; j++)
            printf(".");
        for (int j = 1; j <= 2 *(n-i)+ 1; j++) // i개만큼 *을 그린다
            printf("*");

        printf("\n");
    }
}