#include<stdio.h>
main()
{
	char deta[] = "orange";
	int i;
	i = 0;
	while (deta[i] != '\0')
	{
		printf("%c", deta[i]);
		i++;
	}
	printf("文字列%s\n",&deta[0]);
	printf("文字数は%d文字\n", i);
}