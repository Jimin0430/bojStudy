#pragma warning(disable:4996)
#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	int n; 
	int score[1000];
	double aver = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		double sum = 0;
		double cnt = 0;
		int num;
		scanf("%d", &num);
		for (int j = 0;j < num; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		}
		aver = (double)sum / num;
		for (int j = 0; j < num; j++)
		{
			if (aver < score[j])
				cnt++;
		}
		cnt /= num;
		printf("%.3lf%%\n", (double)cnt*100);
	}
	return 0;
}
