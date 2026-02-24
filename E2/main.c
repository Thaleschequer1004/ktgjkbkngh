#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ENTRADA
    int senha;
    printf("Entre com uma senha numerica: (XXXX): ");
    scanf("%i", &senha);

    //TRATAMENTO DE ERRO:
    if(senha <= 999 || senha >= 10000)
        printf("ERRO NA SENHA: Senha com 4 digitos.\n");
    else {
        // Se for IMPAR E MULTIPLA DE 17
        if(senha % 2 != 0 && senha % 17 == 0)
            printf("SENHA: Criptografia Forte.\n");
        else
            printf("SENHA: Criptografia Fraca.\n");

    }


    return 0;
}
