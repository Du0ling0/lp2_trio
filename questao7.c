/* Jean Victor Lopes Mendes -2115090011
   Mayara da Silva Ferreira -2115200063
   Rafael Lucas Gaspar da Cruz -1615100348 */

#include<stdio.h>

int main(int argc,char**argv)
{

	float a, b, c, media;

	printf("Digite 3 notas , separando-as por vírgulas:\n");
	scanf("%f, %f, %f", &a, &b, &c);
	media = (a+b+c)/3;

	printf("Sua média é : %.2f",media);

	return 0;

}

