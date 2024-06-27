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
	printf("•¶š—ñ%s\n",&deta[0]);
	printf("•¶š”‚Í%d•¶š\n", i);
}