#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;
	srand(time(0));
	kazu = rand()%100;
	printf("���������ϐ���%d�ł�\n",kazu);
}