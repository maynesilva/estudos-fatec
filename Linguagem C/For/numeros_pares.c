//Numeros Pares
//O programa deve imprimir todos os números pares de 1 até 50 usando for.

#include <stdio.h>

int main(){

    int i;

    for (i = 0; i <= 50; i++){
        if (i %2==0){
            printf("Numero: %i\n", i);
        }
    }
}