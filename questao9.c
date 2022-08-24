/*
  Jean Victor Lopes Mendes - 2115090011
  Mayara da Silva Ferreira - 2115200063
  Rafael Lucas Gaspar da Cruz - 1615100348
*/

#include<stdio.h>
#include<math.h>

int main(int argc, char** argv)
{
        float a, b, c, del, r, r1, r2;

        printf("Insira o valor de a: \n");
        scanf("%f", &a);

        if(a==0)
        {
                printf("A equação é do primeiro grau.\n");
        }
        else
        {
                printf("Insira o valor de b e c: \n");
                scanf("%f""%f", &b, &c);

                del=(b*b)-(4)*a*c;
                r=sqrt(del);

                if(del>0)
                {
                        r1=((-b+r)/2*a);
                        r2=((-b-r)/2*a);

                        printf("O delta é positivo e suas raízes são: %.2f, %.2f.\n", r1, r2);
                }
                if(del==0)
                {
                        printf("O delta é igual a zero: %.2f.\n", (-b)/(2*a));
                }
                if(del<0)
                {
                        printf("O delta é negativo, não possui raízes reais.\n");
		}
        }

        return 0;

}
