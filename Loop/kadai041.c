#include<stdio.h>
main()
{
	int gokei, ia,ib;
	float hekin;
	gokei = 0;
	ib = 0;
	printf("��������");
	scanf("%d", &ia);
	while (ia != -999)
	{
		gokei += ia;
		ib++;
		printf("��������");
		scanf("%d" ,& ia);
	}
	hekin = (float)gokei/ ib;
			printf("���v��%d\t���ρ�%.2f", gokei,hekin);
}