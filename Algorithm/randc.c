#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;
	srand(time(0));
	kazu = rand()%301-100;
	printf("発生した変数は%dです\n",kazu);
}