// n부터 1까지 역순 출력
#include <stdio.h>

int main()
{
    int n;

    printf("자연수 입력 : ");
    scanf_s("%d", &n);

    for (; n >= 1; n--)
        printf("%d ", n);
}
