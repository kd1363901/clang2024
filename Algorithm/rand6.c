#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(0));
	int g, a;
	printf("�����o���H\n(1�F�O�[ 2�F�`���L 3�F�p�[)");
	scanf("%d", &g);
	a = rand() % 3;
	switch (g)
	{
	case 1:
		printf("\n�v���C���[�́A�O�[�ł�\n");
		break;
	case 2:
		printf("\n�v���C���[�́A�`���L�ł�\n");
		break;
	case 3:
		printf("\n�v���C���[�́A�p�[�ł�\n");
		break;
	}
	switch (a)
	{
	case 0:
		printf("\n�R���s���[�^�́A�O�[�ł�\n");
		break;
	case 1:
		printf("\n�R���s���[�^�́A�`���L�ł�\n");
		break;
	case 2:
		printf("\n�R���s���[�^�́A�p�[�ł�\n");
		break;
	}
	switch (((g - 1) - a + 3) % 3)
	{
	case 0:
		printf("\n�������ł�\n");
		break;
	case 1:
		printf("\n�R���s���[�^�̏����ł�\n");
		break;
	case 2:
		printf("\n�v���C���[�̏����ł�\n");
		break;
	}
}