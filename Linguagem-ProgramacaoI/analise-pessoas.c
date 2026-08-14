#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, altura_media = 0, porcen_peso = 0;
    int i, n, idade;
    
    
    int idade_acima = 0;
    int qtd_10_20 = 0;        
    float soma_altura = 0;    
    int qtd_peso_baixo = 0;   

    printf("Qual a quantidade de pessoas? ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("\nQual a idade da pessoa %d ? ", i + 1);
        scanf("%d", &idade);

        printf("Qual o peso da pessoa %d ? ", i + 1);
        scanf("%f", &peso);

        printf("Qual a altura da pessoa %d ? ", i + 1);
        scanf("%f", &altura);

        
        if (idade > 50) {
            idade_acima++; 
        }

        
        if (idade >= 10 && idade <= 20) {
            soma_altura = soma_altura + altura;
            qtd_10_20++; 
        }

        
        if (peso < 40) {
            qtd_peso_baixo++;
        }
    } 
    

    if (qtd_10_20 > 0) {
        altura_media = soma_altura / qtd_10_20;
    }


    if (n > 0) {
        porcen_peso = (qtd_peso_baixo * 100.0) / n; 
    }


    printf("\n--- RESULTADOS ---\n");
    printf("Pessoas com mais de 50 anos: %d\n", idade_acima);
    printf("Media das alturas (10 a 20 anos): %.2f\n", altura_media);
    printf("Porcentagem com menos de 40kg: %.2f%%\n", porcen_peso);

    printf("\n");
    system("pause");
    
    return 0;
}