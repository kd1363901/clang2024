#include<stdio.h>
#define D 8
main()
{
	int d[D]={ 70,60,80,50,40,20,30,10 };
	int i, j;
	int w, gap;
	gap = D / 2;
	while (gap > 0)
	{
		printf("gap=%d\n", gap);
		for (i = gap; i < D; i++)
		{
			for (j = i - gap; j >= 0; j -= gap)
			{
				int k;
				for (k = 0; k < D; k++)
				{
					printf("%d ", d[k]);
				}
				printf("\n");
				if (d[j + gap] < d[j])
				{
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else
				{
					break;
				}
			}
		}
		gap = gap / 2;
		printf("-------------------------\n");
	}
	for (i = 0; i < D; i++)
	{
		printf("%d ", d[i]);
	}
}