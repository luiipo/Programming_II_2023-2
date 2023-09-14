#include <stdio.h>

int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);

	//0을 입력할 때까지 입력 받은 수를 출력하는 프로그램
	int n;
	
	do
	{
		printf("0을 입력하면 종료\n");
		scanf_s("%d", &n);
	} while (n != 0);
}