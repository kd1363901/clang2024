#include<stdio.h>
main()
{
	int no,mo;
	printf("��������́F");
	scanf("%d", &no);
	printf("��������́F");
	scanf("%d", &mo);
	if (no > mo) 
	{
		printf("%d�̕���%d���%d�傫��\n",no,mo,no-mo);
	}
	else
	{
		if (no < mo)

		{
			printf("%d�̕���%d���%d������\n", no, mo,no-mo);
		}
	}
	
		if (no == mo)
		{
			printf("%d��%d�͓�����\n",no,mo);
		}
	
}