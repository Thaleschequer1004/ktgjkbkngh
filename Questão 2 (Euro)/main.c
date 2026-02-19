#include <stdio.h>
#include <stdlib.h>
#define dcota 5.21
#define ecota 6.13



int main()
{
    //Entrada
    float real, dolar, euro;


    printf("Digite o valor em real: ");
    scanf("%f", &real);

    //Processamento

    dolar = real/dcota;
    euro = real/ecota;

    //Saida

    printf("Valor em dolar: US$ %.2f\n", dolar);
    printf("Valor em euro: %.2f\n", euro);




    return 0;
}
