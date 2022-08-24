/* 
   Jean Victor Lopes Mendes - 2115090011
   Mayara da Silva Ferreira - 2115200063
   Rafael Lucas Gaspar da Cruz - 1615100348
*/

#include<stdio.h>

int main(int argc, char** argv)
{
	int a, b, c, rest1, rest2, rest3, rest4, rest5;

	printf("Digite um valor de saque: \n");
	scanf("%d", &a);

	if(a<10 || a>600)
	{
		printf("Valor inválido.\n");
		return 0;
	}

	b=a/100;
	c=a/50;

	if(b==0 && c==0)
	{
		rest1=b;
		rest2=c;
		rest3=a/10;
		rest4=(a%10)/5;
		rest5=(a%10)%5;
	}
	else
	{
		if(b==0)
		{
			rest1=b;
			rest2=(a%100)/50;
			rest3=((a%100)%50)/10;
			rest4=(((a%100)%50)%10)/5;
			rest5=(((a%100)%50)%10)%5;
		}
		else
		{
			rest1=b;
			rest2=((a%100)/50);
			rest3=((a%100)%50)/10;
			rest4=(((a%100)%50)%10)/5;
			rest5=(((a%100)%50)%10)%5;
		}
	}
	
	printf("Notas de 100: %d \n", rest1);
	printf("Notas de 50: %d \n", rest2);
	printf("Notas de 10: %d \n", rest3);
	printf("Notas de 5: %d \n", rest4);
	printf("Notas de 1: %d \n", rest5);

	return 0;
}
