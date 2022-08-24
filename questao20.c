/*
   Jean Victor Lopes Mendes - 2115090011
   Mayara da Silva Ferreira - 2115200063
   Rafael Lucas Gaspar da Cruz - 1615100348
*/

#include<stdio.h>

int main(int argc, char** argv)
{
	int n, cont, cont1, div, div2, i;

	printf("Imprimir os números primos de 1 a: \n");
	scanf("%d", &n);
	printf("\n");

	cont=1;
	div=0;
	div2=0;

	while(cont<=n)
	{
		cont1=1;
		i=0;

		while(cont1<=cont)
		{
			if((cont%cont1)==0)
			{
				i=i+1;
				div=div+1;
			}
			else
			{
				div2=div2+1;
			}

		cont1=cont1+1;
		}

		if(i==2)
		{
			printf("|%d|", cont);
		}

	cont=cont1+1;
	}

	printf("\n O número de divisões é: %d\n", div+div2);

	return 0;

}

