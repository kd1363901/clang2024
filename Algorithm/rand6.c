#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(0));
	int g, a;
	printf("何を出す？\n(1：グー 2：チョキ 3：パー)");
	scanf("%d", &g);
	a = rand() % 3;
	switch (g)
	{
	case 1:
		printf("\nプレイヤーは、グーです\n");
		break;
	case 2:
		printf("\nプレイヤーは、チョキです\n");
		break;
	case 3:
		printf("\nプレイヤーは、パーです\n");
		break;
	}
	switch (a)
	{
	case 0:
		printf("\nコンピュータは、グーです\n");
		break;
	case 1:
		printf("\nコンピュータは、チョキです\n");
		break;
	case 2:
		printf("\nコンピュータは、パーです\n");
		break;
	}
	switch (((g - 1) - a + 3) % 3)
	{
	case 0:
		printf("\nあいこです\n");
		break;
	case 1:
		printf("\nコンピュータの勝ちです\n");
		break;
	case 2:
		printf("\nプレイヤーの勝ちです\n");
		break;
	}
}