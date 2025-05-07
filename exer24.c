#include <stdio.h>

int main() {
    int qtd;
    float custo_total;
    
    printf("Digite o numero de macas compradas: ");
    scanf("%d", &qtd);
    
    if (qtd < 12) {
        custo_total = qtd * 1.30;
    } else {
        custo_total = qtd * 1.00;
    }
    
    printf("custo total da compra: R$ %.2f\n", custo_total);
}