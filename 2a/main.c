#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Declaração das variareis
    float B, C, A;

    printf("\n");

    printf("a) Calcular e exibir a hipotenusa (A) de um triângulo retângulo de catetos B e C, sabendo que:A = √B2 + C2 \n");

    //Entrada de dados
    printf("Digite o valor do cateto B: ");
    scanf("%f", &B);

    printf("Digite o valor do cateto C: ");
    scanf("%f", &C);

    //Processamento

    A = sqrt(B * B + C * C);

    //Saída

    printf("A hipotenusa é: %.2f\n", A);



    return 0;
}
