#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int num, std;
	scanf("%d %d", &num, &std);
	for (int i = 0; i < num; i++)
	{
		int num2;
		scanf("%d", &num2);
		if (num2 < std)
		{
			printf("%d ", num2);
		}
	}
	
	return 0;
}
