#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Declaração das variareis
    float Altura, Massa, IMC;

    printf("\n");

    printf("Calcular e exibir o IMC (indice de Massa Corpórea) de uma pessoa de altura (H) em metros e massa (M) em quilogramas, sabendo que IMC = M / H2 \n");

    //Entrada de dados
    printf("Digite a altura (em metros): ");
    scanf("%f", &Altura);

    printf("Digite a massa (em kg): ");
    scanf("%f", &Massa);

    //Processamento

    IMC = Massa / (Altura * Altura);

    //Saída
    printf("Seu IMC é: %.2f\n", IMC);


    return 0;
}
