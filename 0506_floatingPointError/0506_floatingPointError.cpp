#include <stdio.h>
#include <math.h>

int main()
{
	double a, b;
	
	a = 1.0 - 0.9;
	b = 0.1;

	if (a - b == 0)
		printf("같다\n");
	else
		printf("다르다\n");

	printf("(1.0-0.6) == 0.1은 %d입니다.\n", fabs(a - b) < 0.0001);

	if (fabs(a - b) < 0.0001)
		printf("a와 b는 같다\n");
	else
		printf("a와 b는 다르다\n");

	return 0;
}