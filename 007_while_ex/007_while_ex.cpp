#include <stdio.h>

int main()
{
	int n;
	int i = 1;

	printf("*를 몇 개 출력할까요?");
	scanf_s("%d", &n);

	while (i <= n)
	{
		printf("*");
		//i++;
	}

}