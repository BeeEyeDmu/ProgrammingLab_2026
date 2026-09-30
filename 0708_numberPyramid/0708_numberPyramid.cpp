#include <stdio.h>

int main()
{
	int n;

	printf("몇 층 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf(" %02d", j);
		printf("\n");
	}

	return 0;
}