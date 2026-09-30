// 10000을 넘지 않는 가장 큰 값과 그때의 n
#include <stdio.h>

int main()
{
	int sum = 0;
	int n = 0;
	
	while (sum <= 10000) {
		n++;
		sum += n;		
	}

	printf("n=%d, sum=%d\n", n - 1, sum - n);
}