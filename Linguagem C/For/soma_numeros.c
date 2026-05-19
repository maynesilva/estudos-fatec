//Soma de números  
//O programa deve calcular a soma de todos os números de 1 até 100 usando for.


#include<stdio.h>

int main(){
 int i;
 int soma =0;

 for (i=1; i<=100; i++){
    soma = soma + i;
 }

 printf("A soma de 1 ate 100: %i\n", soma);

}