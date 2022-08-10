#pragma warning(disable:4996)
#include<stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000000
int main()
{
	int arr[8];
	int cnt = 0;
	for (int i = 0; i <= 8; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max_num = arr[0];
	for (int i = 0; i <= 8; i++)
	{
		if (max_num < arr[i])
		{
			max_num = arr[i];
			cnt = i;
		}
	}
	printf("%d\n", max_num);
	printf("%d", cnt+1);

	return 0;
	
}
