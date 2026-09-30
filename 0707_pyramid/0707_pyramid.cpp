// 7장 프로그래밍 문제 7번
#include <stdio.h>

int main()
{
	int n;

	printf("몇 층 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}