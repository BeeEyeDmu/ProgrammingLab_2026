#include <stdio.h>

int main()
{
	int value;

	printf("정수 입력 : ");
	scanf_s("%d", &value);

	// C언어에서는 10진수(%d), 8진수(%o), 16진수(%x, %X)
	// 정수를 10진, 8진, 16진수로 출력할 수 있다.
	// 단, 2진수로 출력해주는 형식지정자는 없다
	printf("%d %o %X\n", value, value, value);

	return 0;
}