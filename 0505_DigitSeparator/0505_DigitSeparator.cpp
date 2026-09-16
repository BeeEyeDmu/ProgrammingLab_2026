#include <stdio.h>

int main()
{
	int n;

	printf("두자리 정수 입력 : ");
	scanf_s("%d", &n);

	printf("%d %d\n", n / 10, n % 10);

	return 0;
}