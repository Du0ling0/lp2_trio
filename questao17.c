/* Jean Victor Lopes Mendes -2115090011
   Mayara da Silva Ferreira -2115200063
   Rafael Lucas Gaspar da Cruz -1615100348 */

#include <stdio.h>

int main (int argc, char **argv)
{

	int Numero[10], i, impar, somatorio;
	printf ("Entre com os números: ");
	for (i=0;i<10;i++)
	{
	scanf ("%d", &Numero[i]);
	}
	somatorio = 0;
	impar = 0;
	for (i=0;i<10;i++)
	{

	if (Numero[i] % 2 == 0)
	{
	somatorio += Numero[i];
	}
	else
	{

	impar++;
	}
	}

	printf("A soma dos pares é: %d e o número de ímpares é: %d\n", somatorio, impar);

	return 0;
}

