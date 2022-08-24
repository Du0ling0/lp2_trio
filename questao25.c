/*
	RAFAEL LUCAS GASPAR DA CRUZ - 1615100348
	JEAN VICTOR LOPES MENDES - 2115090011
	MAYARA DA SILVA FERREIRA- 2115200063
*/

#include <stdio.h>
int main(int argc, char **argv)
{
	float n, cont, cont2;

	printf("Digite o numero de termos: ");
	scanf("%f", &n);

	cont=1;
	cont2=1;

	printf("S= ");

	while(cont<n)
	{
		printf(" %.0f/%.0f + ", cont, cont2);
		cont= cont+1;
		cont2=cont2+2;

	}

	printf("%.0f/%.0f \n",cont, cont2);

	return 0;
}
