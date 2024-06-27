#include<stdio.h>
main()
{
	char data[] = "Language";
	char l, * p_data;
	int cnt;
	cnt = 1;
	printf("data[]=%s\n", data);
	printf("ŒŸõ•¶š‚ÍH  ");
	scanf("%c", &l);
	p_data = data;
	while (*p_data)
	{
		if (l == *p_data)
		{
			printf("ŒŸõŒ‹‰Ê‚ÍA%d •¶š–Ú‚Å‚·\n", cnt);
		}
		p_data++;
		cnt++;
	}
	
}