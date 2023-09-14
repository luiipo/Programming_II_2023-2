// 1~n까지 홀수 출력
#include <stdio.h>

int main()
{
	int n;
	int i = 1;
	
	printf("정수를 입력하세요\n");
	scanf_s("%d", &n);

	//반복구간
	while (i <= n)
	{
		printf("%d", i);
		i += 2;
	}

	while (i <= n)
	{
		if (i % 2 == 1)
			printf("%d\n", i);
		i++;
	}
}
