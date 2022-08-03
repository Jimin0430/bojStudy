#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int hour, min;
	int cook, cook_hour;
	int res_min;
	scanf("%d %d", &hour, &min);
	scanf("%d", &cook);
	cook_hour = (int)cook / 60;
	res_min = min + cook - cook_hour * 60;
	int res_hour = hour + cook_hour;
	if (res_min >= 60)
	{
		if (res_hour < 23)
			printf("%d %d", res_hour + 1, res_min-60);
		else
			printf("%d %d", res_hour-23, res_min-60);
	}
	else
	{
		if (res_hour < 24)
			printf("%d %d", res_hour, res_min);
		else
			printf("%d %d", res_hour - 24, res_min);
	}

	
	
	return 0;
}
