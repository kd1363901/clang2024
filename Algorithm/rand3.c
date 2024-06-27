#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k;
	srand(time(0));
	k = rand() %100+1;
	if (k <= 30)
	{
		printf("%d ‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«I\n",k);
	}
	else {
		printf("%d ’ÊíUŒ‚\n", k);
	}

}