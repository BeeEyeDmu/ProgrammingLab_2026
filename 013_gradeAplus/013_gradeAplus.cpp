// A+, A0, ..., F로 출력되는 학점 계산
#include <stdio.h>

int main()
{
	int score;	

	printf("점수 입력 : ");
	scanf_s("%d", &score);

	if (score >= 95)		
		printf("A+");
	else if(score >= 90)	
		printf("A0");
	else if (score >= 85)	
		printf("B+");
	else if (score >= 80)	
		printf("B0");
	else if (score >= 75)	
		printf("C+");
	else if (score >= 70)	
		printf("C0");
	else if (score >= 65)	
		printf("D+");
	else if (score >= 60)	
		printf("D0");
	else					
		printf("F");

	switch (score/5)
	{
	case 20:
	case 19: printf("A+"); 	break;
	case 18: printf("A0"); 	break;
	case 17: printf("B+"); 	break;
	case 16: printf("B0"); 	break;
	case 15: printf("C+"); 	break;
	case 14: printf("C0"); 	break;
	case 13: printf("D+"); 	break;
	case 12: printf("D0"); 	break;
	default: printf("F");	break;
	}
	return 0;
}
