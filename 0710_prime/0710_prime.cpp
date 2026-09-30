#include <stdio.h>

int main()
{
	// 어떤 수가 소수인지 알기
	int n;

	//printf("숫자 입력 : ");
	//scanf_s("%d", &n);

	int i;

	for (int n = 2; n <= 100; n++) {
		// 소수 판정
		for (i = 2; i <= n - 1; i++)
			if (n % i == 0)
				break;

		if (i == n)
			printf("%d ", i);
		//if (i == n)
		//	printf("%d : 소수\n", n);
		//else
		//	printf("%d : 소수가 아님\n", n);
	}
	printf("\n");

	return 0;
}