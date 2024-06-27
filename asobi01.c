#include<stdio.h>
main()
{
	char l;
	printf("何処にいきたい？\n");
	printf("1\n");
	printf("2\n");
	printf("3\n");
	printf("何処か、、、:");
	scanf("%c", &l);
	switch (l)
	{
	case'1':
		printf("それならここをまっすぐだ");
		break;
	case'2':
		printf("それならここを右に曲がってすぐだ");
		break;
	case'3':
		printf("それならまず戻ってそこから左だ");
		break;
	}
	
}