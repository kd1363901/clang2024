#include<stdio.h>
main()
{
	int deta[] = { 10,20,30,40,50,60,70,80,-999 };
	int* pd;
	int i;
	pd = deta;
	printf("�|�C���^���Œ�ŕ\��\n�z��deta[]=");
	for (i = 0;*(pd+i)!=-999; i++)
	{
		printf("%d ", *(pd + i));
	}
	printf("\n�|�C���^��ω������ĕ\��\n�z��deta[]=");
	for (pd = deta; *(pd) != -999; pd++)
	{
		printf("%d ", *pd);
	}
}