/*
	RAFAEL LUCAS GASPAR DA CRUZ - 1615100348
	JEAN VICTOR LOPES MENDES - 2115090011
	MAYARA DA SILVA FERREIRA- 2115200063
*/
#include <stdio.h>
int main ( int argc, char** argv)
{
	int a, b, c;
	printf("Digite o primeiro lado do triangulo em modulo: \n");
	scanf("%d", &a);

	if( a < 0)
	{
		printf("O valor tem que ser em modulo \n");
		return 0;
	}

	printf("Digite o segundo lado do triangulo em modulo: \n");
	scanf("%d", &b);

	if( b < 0)
	{
		printf("O valor tem que ser em modulo \n");
		return 0;
	}

	printf("Digite o terceiro lado do triangulo em modulo: \n");
	scanf("%d", &c);

	if( c < 0)
	{
		printf("O valor tem que ser em modulo \n");
		return 0;
	}

	if ((a + b) > c && (a + c) > b && (c + b) > a)
	{
		printf("Os lados podem formar um triangulo! \n");
	}

	else
	{
		printf("Os lados nao podem formar um triangulo! \n");
		return 0;
	}

	if (a != b && b != c && c != a)
	{
		printf("O triangulo e Escaleno! \n");
	}

	else 
	{
		if (a == b && b == c && c == a)
		{
			printf("O triangulo e Equilatero! \n");
		}

		else
		{
			printf("O triangulo e Isosceles! \n");
		}
	}

	return 0;
}
