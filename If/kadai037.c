#include<stdio.h>
main()
{
	int c;

	printf("�O����P�O�O�܂ł̐����F");
	scanf("%d", &c);
	if (c >=90)
	{
		printf("���̐��l�̔��茋�ʂ́u5�v�ł��B\n");
	}
	else
	{
		if (c >= 80 && c < 90)
		{
			printf("���̐��l�̔��茋�ʂ́u4�v�ł��B\n");
		}
		else
			if (c >= 50 && c < 80)
		{
			printf("���̐��l�̔��茋�ʂ́u3�v�ł��B\n");
		}
			else
				if (c >= 30&& c < 50)
				{
					printf("���̐��l�̔��茋�ʂ́u2�v�ł��B\n");
				}
				else
					if (c >= 1 && c < 30)
					{
						printf("���̐��l�̔��茋�ʂ́u1�v�ł��B\n");
					}
	}
}