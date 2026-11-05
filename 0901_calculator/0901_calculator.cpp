#include <stdio.h>
#include <stdlib.h>

// global(전역) 변수
// 자동 초기화
int cnt_add;
int cnt_sub;
int cnt_mul;
int cnt_div;

int add(int a, int b)
{
	static int cnt = 0;
	printf("add() : %d\n", ++cnt);

	printf("add() : %d\n", ++cnt_add);

	return a + b;
}

int subtract(int a, int b)
{
	static int cnt = 0;
	printf("subtract() : %d\n", ++cnt);
	printf("subtract() : %d\n", ++cnt_sub);
	return a - b;
}

int multiply(int a, int b)
{
	static int cnt = 0;
	printf("multiply() : %d\n", ++cnt);
	printf("multiply() : %d\n", ++cnt_mul);

	return a * b;
}

int divide(int a, int b)
{
	static int cnt = 0;
	printf("divide() : %d\n", ++cnt);
	printf("divide() : %d\n", ++cnt_div);

	return a / b;
}

int main()
{
	int x;
	int a, b;

	do {
		printf("\n===========\n");
		printf("1. 덧셈\n");
		printf("2. 뺄셈\n");
		printf("3. 곱셈\n");
		printf("4. 나눗셈\n");
		printf("5. 종료\n");

		printf("원하는 계산은? ");
		scanf_s("%d", &x);

		if (x >= 1 && x <= 4) {
			printf("두 수를 입력 : ");
			scanf_s("%d %d", &a, &b);
		}

		switch (x)
		{
		case 1:
			printf("결과 = %d\n", add(a, b));
			break;
		case 2:
			printf("결과 = %d\n", subtract(a, b));
			break;
		case 3:
			printf("결과 = %d\n", multiply(a, b));
			break;
		case 4:
			printf("결과 = %d\n", divide(a, b));
			break;
		case 5:
			exit(0);
			break;
		default:
			break;
		}
	} while (x != 5);

	return 0;
}