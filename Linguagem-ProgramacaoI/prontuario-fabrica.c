#include<stdio.h>
#include <stdlib.h>
#include<ctype.h>
#define SALARIO_MINIMO 1600.00

int main(){
    int n;
    printf("Digite o numero de funcionarios: ");
    scanf("%d", &n);

    float totalFolha = 0;
    float maiorSalario = 0;
    int prontuarioMaiorSalario = 0;
    int somaPecasMulheres = 0, totalMulheres = 0;
    int somaPecasHomens = 0, totalHomens = 0;

    for (int i = 1; i <= n; i++){
    int prontuario, pecas;
    char sexo;
    float salario;

    printf("\n --- Funcionario %d ---\n", i);
    printf("Prontuario: ");
    scanf("%d", &prontuario);

    printf("Pecas produzidas: ");
    scanf("%d", &pecas);

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);

    if (pecas <= 30){
        salario = SALARIO_MINIMO;
    } else if (pecas <= 35){
        salario = SALARIO_MINIMO + (pecas - 30) * 0.03 * SALARIO_MINIMO;
    } else {
        salario = SALARIO_MINIMO + (pecas - 35) * 0.05 * SALARIO_MINIMO;
    }
        printf("Salario do prontuario %d: R$ %.2f\n", prontuario, salario);

    totalFolha += salario;

    if (salario > maiorSalario){
        maiorSalario = salario;
    prontuarioMaiorSalario = prontuario;
    }

    if (sexo == 'F' || sexo =='f'){
        somaPecasMulheres += pecas;
        totalMulheres++;
    } else {
        somaPecasHomens += pecas;
        totalHomens++;
    }
}

    printf("\n ===RESULTADO FINAIS ===\n");
    printf("Total da folha de pagamento: R$ %.2f\n", totalFolha);

    if (totalMulheres > 0)
        printf("Media de pecas das mulheres: %.2f\n",
               (float) somaPecasMulheres / totalMulheres);
    else
        printf("Nenhuma funcionaria cadastrada.\n");

    if (totalHomens > 0)
        printf("Media de pecas dos homens: %.2f\n",
               (float) somaPecasHomens / totalHomens);
    else
        printf("Nenhum funcionario cadastrado.\n");

    printf("Prontuario de maior salario: %d (R$ %.2f)\n",
           prontuarioMaiorSalario, maiorSalario);

    return 0;
}