/*
   Jean Victor Lopes Mendes - 2115090011
   Mayara da Silva Ferreira - 2115200063
   Rafael Lucas Gaspar da Cruz - 1615100348
*/

#include<stdio.h>

int main(int argc, char** argv)
{
        int a, b;

        printf("Digite um número: \n");
        scanf("%d", &a);

        while(a!=0)
        {
                b=a%10;
                printf("%d", b);
                a=a/10;
        }

        printf("\n");

        return 0;
}
