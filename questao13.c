/*
	RAFAEL LUCAS GASPAR DA CRUZ - 1615100348
	JEAN VICTOR LOPES MENDES - 2115090011
	MAYARA DA SILVA FERREIRA- 2115200063
*/

#include <stdio.h>
int main(int argc, char **argv)
{
	int cont;
	cont=1;

	while (cont <= 50)
	{
		if ((cont%2) != 0)
		{
			printf(" |%d| ", cont);
		}

		cont=cont+1;
	}

	return 0;
}
