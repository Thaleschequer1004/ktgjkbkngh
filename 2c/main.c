#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    // Declaração das variareis
    float Lado, Altura, Area;

    printf("\n");

    printf("Calcular e exibir a area de um retangulo de lado (L) e altura (H) \n");

    //Entrada de dados
    printf("Digite o valor do lado: ");
    scanf("%f", &Lado);

    printf("Digite o valor da altura: ");
    scanf("%f", &Altura);

    //Processamento

    Area = Lado * Altura;

    //Saída
    printf("A area do retangulo e: %.2f\n", Area);

    return 0;
}
