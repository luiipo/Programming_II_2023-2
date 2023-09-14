#include <stdio.h>

int main()
{
	// 1. 안녕하세요 10번 출력
	for (int i = 1; i <= 10; i++)
		printf("안녕하세요\n");

	//10을 10번 출력
	for (int i = 1; i <= 10; i++)
		printf("10 ");
	printf("\n");
	
	//1~10 출력
	for (int i = 1; i <= 10; i++)
		printf("%d ", i);
	printf("\n");

	//라인 번호와 안녕하세요 10번 출력
	for (int i = 1; i <= 10; i++)
		printf("%d %7s\n", i, "안녕하세요");
	printf("\n");

	// 1~10 합계와 곱 구하기
	int sum = 0;
	int mult = 1;

	for (int i = 0; i <= 10; i++)
		sum = sum + i;
	printf("%d\n", sum);

	for (int i = 1; i <= 10; i++)
		mult = mult * i;
	printf("%d", mult);

	// 0.1 ~ 10.0 +0.2씩 증가 
	for (float i = 0.1; i <= 10.0; i += 0.2)
		printf("%.1f\n", i);

	
}