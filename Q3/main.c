#include <stdio.h>
#include <stdlib.h>

int main()
{

    // entrada
    float A, B, C;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    // processamento
     if (A < B + C && B < A + C && C < A + B) {

        printf("Forma um triangulo.\n");

        if(A == B && B == C){
            printf("Triangulo Equilatero.\n");
        }
        else if (A == B || A == C || B == C){
            printf("Triangulo Isosceles.\n");
        }
        else {
            printf("Triangulo Escaleno.\n");
        }

     } else {
        printf("Nao forma um triangulo.\n");

     }
    return 0;
}
