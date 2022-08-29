/* Jean Victor Lopes Mendes -2115090011
   Mayara da Silva Ferreira -2115200063
   Rafael Lucas Gaspar da Cruz -1615100348 */

#include <stdio.h>

int main(int argc, char**argv)
{

    int n;
    float termo, resultado = 0, controlador =1;

    printf("Numero de termos: ");
    scanf("%d", &n);
    printf("H = ");

    while(controlador<=n)
    {
        termo = (1/controlador);

        if(controlador>1)
            printf("1/%.0f", controlador);

        else
            printf("1");

        if((n-controlador) > 0)
            printf(" + ");
        resultado = resultado + termo;
        controlador ++;
    }

    printf("\nResultado de H = %.2f", resultado);

    return 0;
}
