/*
	RAFAEL LUCAS GASPAR DA CRUZ - 1615100348
	JEAN VICTOR LOPES MENDES - 2115090011
	MAYARA DA SILVA FERREIRA- 2115200063
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	int a, n1, n2, n3, cont;

	cont=3;
	n1= 1;
	n2=1;

	printf("Digite quantos termos a sequencia deve ter: \n");
	scanf("%d", &a);

	if (a==1)
	{
		printf("1 \n");

		return 0;
	}

	if (a==2)
	{
		printf("1-1 \n");

		return 0;
	}

	printf ("1-1");

	while (cont<=a)
	{
		n3= n1+n2;
		printf("-%d",n3);
		n1=n2;
		n2=n3;
		cont= cont+1;
	}

	printf("\n");

	return 0;
}
