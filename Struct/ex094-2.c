#include<stdio.h>
#include<string.h>
#define K 5
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data[K] ;
	struct profile *p ;
	int i;
	for (p = data, i = 0; i < K; i++, p++)
	{
		printf("%d�l��(���O)�F",i+1);
		scanf("%s",(p+i)->name);
		printf("%d�l��(���N����)�F", i + 1);
		scanf("%d%d%d", &(p+i)->birth[0], &(p+i)->birth[1], &(p+i)->birth[2]);
		printf("%d�l��(���t�^)�F", i + 1);
		scanf("%s", p->blood);
	}
	for (p = data, i = 0; i < K; i++, p++)
	{
		if(strcmp(p->blood,"A")==0)
		{
			printf("%s--%d�N %d�� %d���� ���t�^-%s�^\n", (p+i)->name,
				(p+i)->birth[0], (p+i)->birth[1], (p+i)->birth[2], (p+i)->blood);
		}
		
	}
}