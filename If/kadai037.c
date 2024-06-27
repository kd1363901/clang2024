#include<stdio.h>
main()
{
	int c;

	printf("０から１００までの整数：");
	scanf("%d", &c);
	if (c >=90)
	{
		printf("その数値の判定結果は「5」です。\n");
	}
	else
	{
		if (c >= 80 && c < 90)
		{
			printf("その数値の判定結果は「4」です。\n");
		}
		else
			if (c >= 50 && c < 80)
		{
			printf("その数値の判定結果は「3」です。\n");
		}
			else
				if (c >= 30&& c < 50)
				{
					printf("その数値の判定結果は「2」です。\n");
				}
				else
					if (c >= 1 && c < 30)
					{
						printf("その数値の判定結果は「1」です。\n");
					}
	}
}