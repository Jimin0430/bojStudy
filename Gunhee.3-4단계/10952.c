#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	while (1)
	{
		int num1, num2;
		scanf("%d %d", &num1, &num2);
		if (num1 == 0 && num2 == 0)
			break;
		else
			printf("%d\n", num1 + num2);
	}
	return 0;
	
}
