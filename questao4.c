/*
	RAFAEL LUCAS GASPAR DA CRUZ - 1615100348
	JEAN VICTOR LOPES MENDES - 2115090011
	MAYARA DA SILVA FERREIRA- 2115200063
*/

#include <stdio.h>
int  main( int argc, char** argv)
{
	int a, b, c, maior, meio, menor;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &a);
	
	printf("Digite o segundo  numero: \n");
	scanf("%d", &b);

	printf("Digite o terceiro numero: \n");
	scanf("%d", &c);
	
	if (a>b && b>c)
	{
		maior= a;
		meio= b;
		menor=c;
	}

	else
	{
		if (a>c && c>b)
		{
			maior= a;
			menor= b;
		}

		else
		{
			if (b>a && a>c)
			{
				maior= b;
				menor= c;
			}

			else
			{
				if (b>c && c>a)
				{
					maior= b;
					menor= a;
				}

				else
				{
					if (c>a && a>b)
					{
						maior= c;
						menor= b;
					}

					else
					{
						maior= c;
						menor= a;
					}
				}
			}
		}
	}

	printf("O maior numero e: %d \n", maior);
	printf("O menor numero e: %d \n", menor);

	return 0;
}
