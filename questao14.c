/*
	RAFAEL LUCAS GASPAR DA CRUZ - 1615100348
	JEAN VICTOR LOPES MENDES - 2115090011
	MAYARA DA SILVA FERREIRA- 2115200063
*/

#include <stdio.h>
int main (int argc, char **argv)
{
	int a, b, cont;

	printf("Digite o primeiro numero: \n");
	scanf("%d",&a);

	printf("Digite o segundo numero: \n");
	scanf("%d",&b);

	if ( a < b)
	{
		cont= a;
	}

	else
	{
		cont= b;
	}

	if (a==b)
	{
		printf("Nao existe numeros compreendidos entre os dois valores! \n");
	}

	while( (cont>=a && cont<(b-1)) || (cont>=b && cont<(a-1)) )
	{
		cont= cont+1;
		printf(" |%d| ", cont);
	}

	return 0;
}
