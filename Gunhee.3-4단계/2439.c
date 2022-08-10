#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int bl = n - 1;
	for (int i = n; i>0; i--)
	{
		for (int i = bl; i > 0; i--)
		{
			printf(" ");
		}
		bl--;
		for (int j = i; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	
	
	return 0;
}
