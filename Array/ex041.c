#include<stdio.h>
main()
{
	float m=0,box[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("実数を入力：");
		scanf("%f",&box[i]);
		m += box[i];
	}
	printf("合計は%.2fです\n 平均は%.2fです\n", m, m / 3);


}