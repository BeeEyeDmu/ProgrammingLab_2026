// 1부터 n까지의 합을 순환함수로 만들기
#include <stdio.h>

// recursive sum
int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return sum(n - 1) + n;
}

int main()
{
	int n;


	printf("n 입력 : ");
	scanf_s("%d", &n);

	printf("sum = %d\n", sum(n));

	return 0;
}