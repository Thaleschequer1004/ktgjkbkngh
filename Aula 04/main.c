#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    // Entrada
    float X1, Y1, X2, Y2, D;

    printf("Digite o valor de X1: ");
    scanf("%f", &X1);

    printf("Digite o valor de X2: ");
    scanf("%f", &X2);

    printf("Digite o valor de Y1: ");
    scanf("%f", &Y1);

    printf("Digite o valor de Y2: ");
    scanf("%f", &Y2);

    //Processamento
    D = sqrt(pow(X1 - X2, 2) + pow(Y1 - Y2, 2));


    printf("DISTANCIA ENTRE OS PONTOS P(X1, Y1) E Q(X2, Y2)\n");
    printf("Dados de entrada\n");
    printf("Coordenada X1 - PONTO P: %.1f\n", X1);
    printf("Coordenada X2 - PONTO P: %.1f\n", X2);
    printf("Coordenada Y1 - PONTO Q: %.1f\n", Y1);
    printf("Coordenada Y2 - PONTO Q: %.1f\n", Y2);
    printf("DISTANCIA ENTRE OS PONTOS P(%.1f, %.1f) E Q(%.1f, %.1f): %.1f", X1, X2, Y1, Y2, D);




    return 0;
}
