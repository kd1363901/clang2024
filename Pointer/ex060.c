#include<stdio.h>
main()
{
	char data[] = "Language";
	char l, * p_data;
	int cnt;
	cnt = 1;
	printf("data[]=%s\n", data);
	printf("���������́H  ");
	scanf("%c", &l);
	p_data = data;
	while (*p_data)
	{
		if (l == *p_data)
		{
			printf("�������ʂ́A%d �����ڂł�\n", cnt);
		}
		p_data++;
		cnt++;
	}
	
}