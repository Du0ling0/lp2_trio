/*
	RAFAEL LUCAS GASPAR DA CRUZ - 1615100348
	JEAN VICTOR LOPES MENDES - 2115090011
	MAYARA DA SILVA FERREIRA- 2115200063
*/

#include <stdio.h>
int main(int argc, char** argv)
{
	int a, b;
	printf ("Digite um numero: \n");
	scanf("%d", &a);
	
	printf("Digite um outro numero: \n");
	scanf("%d", &b);

	if (a > b)
	{
		printf("O maior numero e: %d \n", a);
	}

	else
	{
		printf("O maior numero e: %d \n", b);
	}

	return 0;
}
