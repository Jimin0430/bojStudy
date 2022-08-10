#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int res, cnt;
	int sum = 0;
	scanf("%d", &res);
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++)
	{
		int _pr, _cnt;
		scanf("%d %d", &_pr, &_cnt);
		sum += _pr * _cnt;
	}
	if (sum == res)
		printf("Yes");
	else
		printf("No");

	
	return 0;
}
