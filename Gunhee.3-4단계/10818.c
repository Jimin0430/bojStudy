#pragma warning(disable:4996)
#include<stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000000
int main()
{
	int n;
	scanf("%d", &n);
	int max_num, min_num;
	int arr[MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	max_num = arr[0];
	min_num = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max_num < arr[i])
			max_num = arr[i];
		if (min_num > arr[i])
			min_num = arr[i];
	}
	printf("%d %d", min_num, max_num);
	
	return 0;
	
}
