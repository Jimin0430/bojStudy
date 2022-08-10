#pragma warning(disable:4996)
#include<stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000000

int main()
{
	int arr[10] = { 0 };
	int mod_arr[10] = { 0 };
	int var = 10;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		mod_arr[i] = arr[i] % 42;
	}
	for (int i = 0; i < 10; i++)
	{
		if (mod_arr[i] != -1)
		{
			for (int j = 1; i + j < 10; j++)
			{
				if (mod_arr[i] == mod_arr[i + j])
				{
					var--;
					mod_arr[i] = -1;
				}
			}
		}
		else
			i++;
	}
	printf("%d\n", var);

	return 0;

}
