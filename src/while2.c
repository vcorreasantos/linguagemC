#include <stdio.h>
#include <stdlib.h>

int main(){
    int v = 1;
    while(v <= 200){
        if(v % 6 ==0){
            printf("O numero %d é multiplo de 6\n",v);
        }
        v++;
    }
    return 0;
}