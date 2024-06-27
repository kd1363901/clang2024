#include<stdio.h>
main()
{
	int i1;
	for(i1 = 1; i1<=60;i1++)
	{
		printf("%3d", i1);
		
		
		if(i1%20==0)
		{
			printf("\n");

		}
		
	}
}