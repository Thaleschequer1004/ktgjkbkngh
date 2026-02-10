#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

int main()
{
    //ALGORITMO: ENTRADA
    float R, area, volume;
    printf("PROGRAMA: ESFERA\n");
    printf("Entre com o Raio (R) em metros: ");
    scanf("%f", &R);

    //PROCESSAMENTO
    area = 4 * PI * pow(R, 2); // Metros quadrados
    volume = 4.0 / 3 * PI * pow(R, 3); // Metros cúbicos

    //Saída
    printf("DADOS DA ESPERA: \n");
    printf("Area: %.4f metros quadrados\n", area);
    printf("Volume: %.4f metros cubicos\n", volume);
    printf("Volume: %.4f litros\n", volume * 1000);
    volume = volume * 1000;
    printf("Volume: %.4f litros\n", volume);


    return 0;
}
