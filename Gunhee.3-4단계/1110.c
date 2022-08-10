#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int num, cnt = 0;
	int new_num = 0;
	int storage ;
	int a, b, right;
	scanf("%d", &num);
	storage = num;
	if (storage == 0)
		cnt++;
	while (new_num != storage)
	{
		a = (int)num / 10;
		b = num - a * 10;
		if (a + b >= 10)
			right = a + b - 10;
		else
			right = a + b;
		new_num = right + b*10;
		cnt++;
		num = new_num;
	}
	printf("%d", cnt);
	
	return 0;
	
}
