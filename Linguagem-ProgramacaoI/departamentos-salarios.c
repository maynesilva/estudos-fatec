// Uma empresa possui três departamentos, cada departamento possui N funcionários. A empresa quer saber:+
// O amior salário bem como o departamento alocado, o total de salário por departamento, total geral de todos os departamentos.

#include<stdio.h>
#include<stdlib.h>

int main (){
    float salario, total_geral = 0, total_parcial = 0;
    int i, j, n;
    int xdepto;
    float maior = 0;

    for (i=0; i<3; i++){
        printf("\n Informe a quantidade de funcionario do Depto %d: ", i+1);
        scanf("%d", &n);

        for (j=0; j<n; j++){
            printf("\n Informe o salario: ");
            scanf("%f", &salario);

            total_geral += salario;
            total_parcial += salario;

            if (salario > maior){
                maior = salario;
                xdepto = i;
            }
        }
        printf("\n O total de depto %d de %.2f", i+1, total_parcial);
        system("pause");
        total_parcial = 0;
    } 
    printf("\n O maior salario encontrado %.2f pertence ao depto %d", maior, xdepto+1);
    printf("\n O total geral de todos os departamentos %.2f", total_geral);

}