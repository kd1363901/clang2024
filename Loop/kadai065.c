#include<stdio.h>
main()
{
	int gokei, ia,ib;
	float hekin;
	gokei = 0;
	ib = 0;
	printf("�����i�|�X�X�X�܂ŏI���j");
	scanf("%d", &ia);
	do
	{
		gokei += ia;
		ib++;
		printf("�����i�|�X�X�X�܂ŏI���j");
		scanf("%d" ,& ia);
	}while (ia != -999);
	hekin = (float)gokei/ ib;
			printf("���v��%d\t���ρ�%f", gokei,hekin);
}