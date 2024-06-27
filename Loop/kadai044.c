#include<stdio.h>
main()
{
	int c;

	printf("整数？（ー９９９で終了）");
	scanf("%d", &c);
	while (c != -999)
	{
		printf("８進数%o\t１６進数%X\n", c,c);
		printf("整数？（ー９９９で終了）");
		scanf("%d", &c);
	}
}