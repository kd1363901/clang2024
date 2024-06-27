#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{ 40,50,60 },{70,80,90} };
	int* p_tbl,i;
	p_tbl = tbl[1]; //1行見の先頭アドレスを入れる

	printf("2次元配列tblの内容\n");
	for (i = 0; i<3; i++)
	{
		//printf("%d ", *p_tbl++);//表示後に次のデータへ進む
		//printf("%d ", *p_tbl)//表示
		//p_tbl++;//次のデータへ進む
		printf("%d ", *p_tbl++);

	}
}