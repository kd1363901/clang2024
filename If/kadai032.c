#include<stdio.h>
main()
{
	int a;
	printf("整数？");
	scanf("%d", &a);
	if (a%2==0)
	{
		printf("偶数です。");
	}
	else
	{
		printf("奇数です。");
	}
}