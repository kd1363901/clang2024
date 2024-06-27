#include<stdio.h>
main()
{
	char m;
	int i1,i2,i3;

	printf("処理を入力：");
	scanf("%c", &m);

	printf("整数を入力：");
	scanf("%d%d%d", &i1,&i2,&i3);
	switch (m)
	{
	case'd':
	case'D':
		if (i1 > i2)
		{
			if (i1 > i3)
			{
				printf("最大値は%dです\n", i1);
			}
			else
			{
				printf("最大値は%dです\n", i3);
			}
		}
		break;
	case's':
	case'S':
		if(i1<i2)
		{
			if (i1 < i3)
			{
				printf("最大値は%dです\n", i2);
			}
			else 
			{
				printf("最大値は%dです\n", i3);
			}
		}
		break;
	case'g':
	case'G':
		printf("合計は%dです\n", i1 + i2 + i3);
		break;
	case'h':
	case'H':
		printf("平均は%.2fです\n", (float)(i1 + i2 + i3) / 3);
		break;
	default:
		printf("処理エラー");
	}
}