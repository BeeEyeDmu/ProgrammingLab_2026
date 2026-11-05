// 어떤 수(n)가 어떤 수(m)의 배수인지 확인하는 함수
// if(n % m == 0)이면 배수이다
#include <stdio.h>

int is_multiple(int n, int m)
{
	if (n % m == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int n, m;

	printf("숫자 입력 : ");
	scanf_s("%d %d", &n, &m);

	printf("배수인가 : %d\n", is_multiple(n, m));

	if (is_multiple(n, m) == 1)
		printf("배수이다.");
	else
		printf("배수가 아니다.");
	
	return 0;
}