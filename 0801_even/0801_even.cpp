// even() : 짝수면 1 반환
// absolute() : 절대값 반환
// sign() : +, -, 0을 반환

// 함수 만들기
// 1. 이름 정하기
// 2. 매개변수 정하기
// 3. 리턴 값 정하기
#include <stdio.h>

int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n)
{
	if (n < 0)
		return -n;
	else
		return n;
}

int sign(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 0;
	else
		return 1;
}

int main()
{
	int n;

	printf("숫자 입력 : ");
	scanf_s("%d", &n);

	printf("even()의 결과 : %d\n", even(n));
	printf("absolute()의 결과 : %d\n", absolute(n));
	printf("sign()의 결과 : %d\n", sign(n));

	return 0;
}