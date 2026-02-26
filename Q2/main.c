#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    // entrada
    float massa, altura, imc;

    printf("Digite a massa (KG): ");
    scanf("%f", &massa);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    // processamento
    if (massa <= 0 || altura <= 0){

        printf("ERRO: Massa e altura devem ser maiores do que zero!\n");

    } else {

         imc = massa / pow(altura, 2);

        printf("\nIMC = %.2f\n", imc);

        // Classificação (Seleção Composta)
        if (imc < 18.5) {
            printf("Classificacao: Magreza\n");

        } else if (imc < 25) {
            printf("Classificacao: Saudavel\n");

        } else if (imc < 30) {
            printf("Classificacao: Sobrepeso\n");

        } else if (imc < 35) {
            printf("Classificacao: Obesidade Grau I\n");

        } else if (imc < 40) {
            printf("Classificacao: Obesidade Grau II (Severa)\n");

        } else {
            printf("Classificacao: Obesidade Grau III (Morbida)\n");
        }
    }



    return 0;
}
