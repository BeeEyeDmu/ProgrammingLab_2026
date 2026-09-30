#include <stdio.h>

int main()
{
	int n;

	while (1) {
		printf("숫자 입력 : ");
		scanf_s("%d", &n);
		if (n < 0)
			break;
		for (int i = 1; i <= n; i++)
			printf("*");
		printf("\n");
	}

	return 0;
}