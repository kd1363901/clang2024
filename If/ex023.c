#include<stdio.h>
main()
{
	int no,h=0,m=0,s=0;
	printf("秒数を入力：");
	scanf("%d", &no);
	if (no < 5000) {
		h = no / 3600;
		m = (no % 3600) / 60;
		s = no % 60;
		printf("%d時間%d分%d秒です\n",h,m,s);
	}
	else {
		printf("５０００を超える数値はエラーです\n");
	}
}