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
	printf("������%s\n",&deta[0]);
	printf("��������%d����\n", i);
}