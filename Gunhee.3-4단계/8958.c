#pragma warning(disable:4996)
#include<stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000000

int main(void)
{
	char s[80];
	int n, i, j, score, sum;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		sum = 0;
		scanf("%s", s);
		for (j = 0; s[j] != '\0'; j++)
		{
			score = 0;
			while (s[j] == 'O')
			{
				score++;
				sum += score;
				j++;
			}
			if (s[j] == '\0') break;
		}
		printf("%d\n", sum);
	}
}
