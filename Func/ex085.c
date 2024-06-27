#include <stdio.h>
void Str_Cat(char* s1, char* s2);
main()
{
	char a[100],b[100];
	printf("”z—ña:");
	scanf("%s", a);
	printf("”z—ñb:");
	scanf("%s", b);
	Str_Cat(a, b);
	printf("”z—ña:%s\n",a );
}
void Str_Cat(char* s1, char* s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);

}
