#include<stdio.h>
main()
{
	int i, s, d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("探索値を入力：");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}
	if (i == 10)
	{
		printf("見つからなかった\n");
	}
	else 
	{
		printf("探索値%dを、%d番目で発見！\n", s, i);
	}
}