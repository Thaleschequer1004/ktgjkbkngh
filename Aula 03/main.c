#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Declaração das variareis
    float lado, area

    printf("\n");

    printf("Calcular e exibir a área de um quadrado de lado (L).\n");

    // Entrada de dados
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado)

    // Processamento

    area = lado * lado;

    // Saída

    printf("A area do quadrado e: %.2f\n", area);


    return 0;
}
