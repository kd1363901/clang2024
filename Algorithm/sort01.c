#include<stdio.h>

#define N 5

main()
{
	int d[N] = { 30,7,25,16,10 };
	int i, j,w;
	printf("�\�[�g�O�F");
	for (i = 0; i < N; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");
	for (i = 0; i < N-1; i++)
	{
		for (j = 1; j < N; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("�\�[�g��F");
	for (i = 0; j < N; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");
}