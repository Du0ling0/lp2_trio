/*
   Jean Victor Lopes Mendes - 2115090011
   Mayara da Silva Ferreira - 2115200063
   Rafael Lucas Gaspar da Cruz - 1615100348
*/


#include<stdio.h>

int main(int argc, char** argv)
{
        int i, n, b;

        i=1;
        b=0;

        while(i<=5)
        {
                printf("Digite cinco números: \n");
                scanf("%d", &n);

                if(n>b)
                {
                        b=n;
                }

                i=i+1;
        }

        printf("O maior número é: %d\n", b);

        return 0;
}
