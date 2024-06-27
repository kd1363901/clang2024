#include<stdio.h>
main()
{
	int deta[] = { 10,20,30,40,50,60,70,80,-999 };
	int* pd;
	int i;
	pd = deta;
	printf("ポインタを固定で表示\n配列deta[]=");
	for (i = 0;*(pd+i)!=-999; i++)
	{
		printf("%d ", *(pd + i));
	}
	printf("\nポインタを変化させて表示\n配列deta[]=");
	for (pd = deta; *(pd) != -999; pd++)
	{
		printf("%d ", *pd);
	}
}