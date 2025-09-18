#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int n;
    printf("Digitar um numero inteiro e tecle enter\n");
    scanf("%d",&n);
    if ( n % 2 == 0){
        printf("O numero %d que voce digitou é Par\n",n);
    }
    else{
        printf("O numero %d que voce digitou e Impar\n",n);
    }
    return 0;
}
