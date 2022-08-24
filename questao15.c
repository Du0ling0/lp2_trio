/*
   Jean Victor Lopes Mendes - 2115090011
   Mayara da Silva Ferreira - 2115200063
   Rafael Lucas Gaspar da Cruz - 1615100348
*/

#include<stdio.h>

int main(int argc, char** argv)
{
        int a;

        printf("Digite uma nota entre zero e dez: \n");
        scanf("%d", &a);

        while(a<0||a>10)
        {
                printf("\n");
                printf("Valor invalido.\n");
                printf("Digite uma nota entre zero e dez: \n");
                scanf("%d", &a);
        }

        return 0;
}

