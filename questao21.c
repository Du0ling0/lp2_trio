/*
   Jean Victor Lopes Mendes - 2115090011
   Mayara da Silva Ferreira - 2115200063
   Rafael Lucas Gaspar da Cruz - 1615100348
*/

#include<stdio.h>

int main(int argc, char** argv)
{
        int a, fat;

        printf("Digite um número: \n");
        scanf("%d", &a);
        printf("\n");

        fat=1;

        while(a!=0)
        {
                printf("%d.", a);
                fat=fat*a;
                a=a-1;
        }

        printf("\n");
        printf("O fatorial é: %d. \n", fat);

        return 0;
}
