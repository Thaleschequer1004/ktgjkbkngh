#include <stdio.h>
#include <stdlib.h>
#define polegada 2.54
#define jardas 0.03


int main()
{
    // entrada
    float B, H, Pcm, Ppol, Pjar;

    printf("Digite o valor da base em cm: ");
    scanf("%f", &B);
    printf("Digite o valor da altura em cm: ");
    scanf("%f", &H);

    if (B > 0 && H > 0){

        // processamento
        Pcm = 2 * (B + H);
        Ppol = Pcm / polegada;
        Pjar = Ppol * jardas;

        // saída

        printf("Perimetro em centimetros: %.2f cm \n", Pcm);
        printf("Perimetro em polegadas: %.2f pol \n", Ppol);
        printf("Perimetro em jardas: %.2f jar \n", Pjar);

    } else {

        printf("ERRO: Base e altura devem ser maiores que zero!\n");

    }


    return 0;
}
