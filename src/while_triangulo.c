#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int lin=1, col=1;

    while(lin <= 15){
        col = 1;
        while (col <= lin){
            printf("@  ");
            col++;
        }
        printf("\n");
        lin++;
        
    }
    return 0;
}