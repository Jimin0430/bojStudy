#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int _score;
	scanf("%d", &_score);
	if (_score >= 90)
		printf("A");
	else if (_score >= 80)
		printf("B");
	else if (_score >= 70)
		printf("C");
	else if (_score >= 60)
		printf("D");
	else
		printf("F");
	return 0;


}
