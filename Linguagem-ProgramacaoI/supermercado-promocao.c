//Um supermercado está fazendo uma promoção. O cliente que totalizar+
//em suas compras o valor de R$300,00, terá o desconto de 10% do valor que exceder a R$300,00.
//Exibir: Valor da compra, valor do desconto e valor a pagar.

#include<stdio.h>
#include<stdlib.h>

int main(){
 float compra, desconto, pagar;
 int i, n;

 printf("Informe a quantidade de venda: \n");
 scanf("%d", &n);

 for (i=0; i<n; i++){
    printf("Informe o valor da compra: \n");
    scanf("%f", &compra);

    if (compra > 300){
        desconto = (compra - 300)* 0.1;
        pagar = compra - desconto;
    }else{
    desconto = 0;
    pagar = compra;
    }
    printf("\n O valor da compra %.2f", compra);
    printf("\n O valor do desconto %.2f", desconto);
    printf("\n O valor a pagar: %.2f", pagar);

    system("pause");
 }
}