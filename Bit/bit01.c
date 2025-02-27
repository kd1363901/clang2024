#include<stdio.h>
enum BitState
{
	Base = 0, //0000 0000 通常
	Poison=1<<0, //0000 0001 毒
	Sleep=1<<1, //0000 0010 ねむり
	Paralysis=1<<2, //0000 0100 まひ
	Burn=1<<3, //0000 1000 やけど
	AtkUp=1<<4, //0001 0000 攻撃力アップ
	AtkDown=1<<5, //0010 0000 攻撃力ダウン

};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);

}
void DisplayStatus(UINT s)
{
	printf("\n*****現在の状態*****\n");
	if (s & Poison)
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("眠り\n");
	}
	if (s & Paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s == Base)
	{

	printf("状態異常なし\n");
	}
	printf("********************");
}
void  ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態を付与しますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
		
	}
}
void ClearFlag(UINT*s )
{
	int a;
	while (1)
	{
		printf("\nどの状態を解除しますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 7:全解除\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
			switch (a)
			{
			case 1:
				*s &= ~Poison;
				break;
			case 2:
				*s &= ~Sleep;
				break;
			case 3:
				*s &= ~Paralysis;
				break;
			case 4:
				*s &= ~Burn;
				break;
			case 5:
				*s &= ~AtkUp;
				break;
			case 6:
				*s &= ~AtkDown;
				break;
			case 7:
				*s &= Base;
			default:
				break;
			}

		
	}
}