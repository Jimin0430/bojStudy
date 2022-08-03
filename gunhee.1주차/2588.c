#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", & b);
	int c = a * (b % 10);
	int d = a * ((b % 100) - (b % 10)) / 10;
	int e = a * (b - (b % 100)) / 100;
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", c + 10 * d + 100 * e);

	return 0;



}
