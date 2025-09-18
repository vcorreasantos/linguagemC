#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    float preco, resultado;

    char forma_pg;
    printf("Digite o valor a ser pago e tecle enter:\n");
    scanf("%f",&preco);

    //limpar o buffer do teclado antes de ler o caracter
    // para a execuçao anterior e segue para a proxima etapa
    getchar(); //importante para evitar que o '\n' da
    //leitura anterior seja capturado

    printf("Digite a forma de pagamento, sendo:\nc->crédito\nd->débito\nD->dinheiro\np->pix\n");
    scanf("%c",&forma_pg);

    if( forma_pg == 'c'){
        resultado = preco * (0.05 + 1);
        //  resultado = preco * 0.05 + preco
        printf("O valor a ser pego no crétido é %.2f\n",resultado);
    }
    else if( forma_pg == 'd'){
    printf("O valor a ser pago no débito é %.2f\n",preco);
    }
    else if ( forma_pg == 'D'){
        resultado = preco * 0.98;
        printf("O valor a ser pago mo dinheiro é %.2f\n",resultado);
    }
    else if ( forma_pg == 'p'){
    resultado = preco * 0.96;
    printf("O valor a ser pago no pix é %.2f\n",resultado);
    }
    else {
        printf("Esta forma de pagamento NÃO EXISTE!\n");
    }
    return 0;
}