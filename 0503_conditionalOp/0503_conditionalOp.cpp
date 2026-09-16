#include <stdio.h>

int main()
{
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	int larger;
	int max;

	larger = (a > b) ? a : b;
	max = (larger > c) ? larger : c;
	printf("max = %d\n", max);

	int m = ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c;
	printf("max = %d\n", m);

	//if (a > b)
	//	larger = a;
	//else
	//	larger = b;




	return 0;
}