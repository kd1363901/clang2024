#include<stdio.h>
main()
{
	int c;

	printf("文字コード：（ー１で終了）");
	scanf("%d", &c);
	while (c != -1)
	{
		printf("%c\n", c);
		printf("文字コード：（ー１で終了）");
		scanf("%d", &c);
	}
}