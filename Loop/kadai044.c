#include<stdio.h>
main()
{
	int c;

	printf("�����H�i�[�X�X�X�ŏI���j");
	scanf("%d", &c);
	while (c != -999)
	{
		printf("�W�i��%o\t�P�U�i��%X\n", c,c);
		printf("�����H�i�[�X�X�X�ŏI���j");
		scanf("%d", &c);
	}
}