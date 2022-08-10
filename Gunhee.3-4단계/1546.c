#pragma warning(disable:4996)
#include<stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000000

int main()
{
	int n;
	double score[1000] = { 0 };
	double res = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%lf", &score[i]);
	
	double max_score = 0; 
	for (int i = 0; i < n; i++)
	{
		if (max_score < score[i])
			max_score = score[i];
	}
	for (int i = 0; i < n; i++)
	{
		score[i] = score[i] / max_score * 100;
		res += score[i];
	}
		
	res /= n;
	printf("%lf", res);


}
