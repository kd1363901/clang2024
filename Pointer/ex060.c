#include<stdio.h>
main()
{
	char data[] = "Language";
	char l, * p_data;
	int cnt;
	cnt = 1;
	printf("data[]=%s\n", data);
	printf("検索文字は？  ");
	scanf("%c", &l);
	p_data = data;
	while (*p_data)
	{
		if (l == *p_data)
		{
			printf("検索結果は、%d 文字目です\n", cnt);
		}
		p_data++;
		cnt++;
	}
	
}