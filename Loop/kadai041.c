#include<stdio.h>
main()
{
	int gokei, ia,ib;
	float hekin;
	gokei = 0;
	ib = 0;
	printf("数を入れて");
	scanf("%d", &ia);
	while (ia != -999)
	{
		gokei += ia;
		ib++;
		printf("数を入れて");
		scanf("%d" ,& ia);
	}
	hekin = (float)gokei/ ib;
			printf("合計＝%d\t平均＝%.2f", gokei,hekin);
}