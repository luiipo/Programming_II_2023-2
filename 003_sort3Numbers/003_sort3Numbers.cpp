﻿// 003_sort3Numbers.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("세개의 숫자를 입력 : ");
    scanf_s("%d %d %d", &a, &b, &c);

    if (a >= b && b >= c) //a, b, c
        printf("%d %d %d\n", a, b, c);
    else if (a >= c && c >= b) // a, c ,b
        printf("%d %d %d\n", a, c, b);
    else if (b >= a && a >= c) // b, a, c
        printf("%d %d %d\n", b, a, c);
    else if (b >= c && c >= a) // b, c ,a
        printf("%d %d %d\n", b, c, a);
    else if (c >= a && a >= b) // c, a, b
        printf("%d %d %d\n", c, a, b);
    else if (c >= b && b >= a) // c, b, a
        printf("%d %d %d\n", c, b, a);
    else
        printf("나오면 안되는 경우\n");
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.