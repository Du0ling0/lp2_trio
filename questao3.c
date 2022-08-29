/* Jean Victor Lopes Mendes -2115090011
   Mayara da Silva Ferreira -2115200063
   Rafael Lucas Gaspar da Cruz -1615100348 */

#include<stdio.h>

int main(int atgc,char**argv)
{

	int a, b, c, maior;
	printf("Digite um número:\n");
	scanf("%d", &a);

	printf("Digite outro número:\n");
	scanf("%d", &b);

	printf("Digite mais um número:\n");
	scanf("%d", &c);

	if(a>b)
	{
	maior = a;
		if (c>maior)
		{
		maior = c;
		}
	}

	printf("O número maior é: %d", maior);

	return 0;
}
