#include<stdio.h>
main()
{
	int no,h=0,m=0,s=0;
	printf("�b������́F");
	scanf("%d", &no);
	if (no < 5000) {
		h = no / 3600;
		m = (no % 3600) / 60;
		s = no % 60;
		printf("%d����%d��%d�b�ł�\n",h,m,s);
	}
	else {
		printf("�T�O�O�O�𒴂��鐔�l�̓G���[�ł�\n");
	}
}