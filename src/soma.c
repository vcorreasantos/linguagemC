#include <stdio.h>
int main(){


    int numero1;
    int numero2;
    int resultado;

    printf("Digite em número:\n");
    scanf("%d", &numero1);

    printf("Digite outro numero inteiro e tecle Enter:\n");
    scanf("%d",&numero2);

    resultado = numero1 + numero2;
    printf("A soma do número %d com o número %d e %d \n", numero1,numero2,resultado);

    return 0;
}