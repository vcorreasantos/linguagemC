#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int i, f;
    printf("Digite o ano inicial:\n",i);
    scanf("%d",&i);

    printf("Digite o ano final:\n",f);
    scanf("%d",&f);

    while (i <= f){
        if(i % 4 == 0){
        printf("Esses anos %d que digitou são Bissextos\n",i);

    }
    i++;
}
    return 0;

}