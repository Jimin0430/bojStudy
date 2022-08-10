#pragma warning(disable:4996)
#include<stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000000
int main()
{
	int num1, num2, num3;
	int arr[10] = { 0 };
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	int res = num1 * num2 * num3;

	while (res > 0)
	{
		arr[res % 10]++;
		res /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	
	
	return 0;
	
}
