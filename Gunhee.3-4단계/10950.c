#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int res[1000];
	for (int i = 0; i < n; i++)
	{
		int num1, num2;
		scanf("%d %d",&num1,&num2);
		res[i] = num1 + num2;
	}
	for (int i = 0 ; i < n; i++)
	{
		printf("%d\n", res[i]);
	}


	
	return 0;
}
