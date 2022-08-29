/* Jean Victor Lopes Mendes -2115090011
   Mayara da Silva Ferreira -2115200063
   Rafael Lucas Gaspar da Cruz -1615100348 */

#include<stdio.h>

int main(int argc,char**argv)
{

	float a, b, c, menor;

	printf("Digite o valor do primeiro produto:\n");
	scanf("%f", &a);

	printf("Digite o valor do segundo produto:\n");
	scanf("%f", &b);

	printf("Digite o valor do terceiro produto:\n");
	scanf("%f", &c);

	if(a<b)
	{
	menor  = a;
		if(c<menor);
		{
		menor = c;
		}
	}
	else
	{
	menor = b;
		if (c<menor)
		{
		menor = c;
		}
	}

	printf("O produto de menor preço é: %f \n", menor);

	return 0;
}
