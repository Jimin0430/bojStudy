#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int num1, num2;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &num1, &num2);
		printf("Case #%d: %d + %d = %d\n",i+1,num1,num2, num1 + num2);
	}

	
	return 0;
}
