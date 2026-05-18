//Tabuada
//O usuário digita um número. O programa deve mostrar a tabuada desse número de 1 até 10 usando for.

#include<stdio.h>

int main(){

    int numero, i;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero*i);
    }
}