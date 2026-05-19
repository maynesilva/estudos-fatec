//Tabela de Multiplicação Personalizada  
//O usuário informa um número e um limite. 
//O programa deve imprimir a tabuada desse número até o limite informado (exemplo: número 7 e limite 15 → imprime de 7x1 até 7x15).

#include<stdio.h>

int main(){

    int numero, limite, i;

    printf("Qual a tabuada? \n");
    scanf("%i", &numero);

    printf("Qual o limite dela? \n");
    scanf("%i", &limite);

    for (i=1; i<=limite; i++){
        printf("%i x %i = %i\n", numero, i, numero*i);
    }
}