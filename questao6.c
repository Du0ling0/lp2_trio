/*
	RAFAEL LUCAS GASPAR DA CRUZ - 1615100348
	JEAN VICTOR LOPES MENDES - 2115090011
	MAYARA DA SILVA FERREIRA- 2115200063
*/

#include <stdio.h>
int main (int argc, char** argv)
{
	int a, b, c, maior, meio, menor;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &a);

	printf("Digite o segundo numero: \n");
	scanf("%d", &b);

	printf("Digite o terceiro numero: \n");
	scanf("%d", &c);

	if (a>b && b>c)
	{
		maior= a;
		meio= b;
		menor = c; 
	}

	if (a>c && c>b)
	{
		maior=a;
		meio=c;
		menor=b;
	}

	 if (b>a && a>c)
	{
		maior= b;
		meio= a;
		menor= c;
	}

	if (b>c && c>a)
	{
		maior= b;
		meio= c;
		menor =a;
	}

	if (c>a && a>b)
	{
		maior= c;
		meio= a;
		menor= b;
	}

	if (c>b && b>a)
	{
		maior= c;
		meio= b;
		menor= a;
	}

	printf("%d,  %d,  %d  \n", maior, meio, menor);

	return 0;
}
