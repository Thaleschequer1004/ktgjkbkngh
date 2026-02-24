#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ENTRADA:

    float preco, total;
    int quantidade;

    printf("DADOS DA MERCADORIA: \n");
    printf("Preco: R$ ");
    scanf("%f", &preco);
    printf("Quantidade (Unidades): ");
    scanf("%i", &quantidade);


    // PROCESSAMENTO (LÓGIHO + ARITMÉTICOS) + SAÍDA

    total = preco * quantidade;
    if (total > 1000.00)
        // total = total - 0.03 * total;
        // total = total * (1 - 0.03);
        // total = total * 0.97;
        total *= 0.97; // MAIS EFICIENTE

    printf("Total a pagar(-3 %% OFF): R$ %.2f\n", total);



    return 0;
}
