#include <stdio.h>
#define N 5
main()
{
	int d[N] = { 30,7,25,16,10 };
	int i, j, w;
	printf("�\�[�g�O�F");
	for (i = 0; i < N; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");
	for (i = ; i >0; i--)
	{
			if (d[j] > d[j+1])
			{
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
			}
		}
	}
	printf("\n�\�[�g��F");
	for (i = 0; i < N; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");
}