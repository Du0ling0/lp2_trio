/* Jean Victor Lopes Mendes -2115090011
   Mayara da Silva Ferreira -2115200063
   Rafael Lucas Gaspar da Cruz -1615100348 */

#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente)
{
    int result = 1;

    for(int i=0 ; i < expoente; i++)
    {
        result *= base;
    }

    return result;
}

int main ()
{
    int x, y, resultado;

    printf("Informe a base: ");
    scanf("%d", &x);

    printf("Informe o expoente: ");
    scanf("%d", &y);

    printf("O resultado de %d elevado a %d é: %d",x, y,potencia(x,y));

    return 0;
}
