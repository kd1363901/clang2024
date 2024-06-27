#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, deta[20];
	int target, work;
	printf("シャッフル前\n");
	for (i = 0; i < 20; i++)
	{
		deta[i] = i + 1;
		printf("deta[%d]=%d\n", i, deta[i]);
	}
	srand(time(0));
	printf("シャッフル後\n");
	for (i = 0; i < 20; i++)
	{
		target = rand() % 20;
		work = deta[i];
		deta[i] = deta[target];
		deta[target] = work;
		printf("deta[%d]=%d\n", i, deta[i]);
	}
}