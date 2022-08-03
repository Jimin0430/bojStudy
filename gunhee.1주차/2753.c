#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int _year;
	scanf("%d", &_year);
	if (_year % 4 == 0)
	{
		if (_year % 100 != 0)
			printf("1");
		else
		{
			if (_year % 400 == 0)
				printf("1");
			else
				printf("0");
		}
	}
	else
		printf("0");

	return 0;
		
}
