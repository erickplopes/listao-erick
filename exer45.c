#include <stdio.h>

int main() {
    float kg_morango, kg_maca;
    float preco_morango, preco_maca;
    float valor_total, desconto = 0;

    printf("Quantidade de morangos (em Kg): ");
    scanf("%f", &kg_morango);
    printf("Quantidade de macas (em Kg): ");
    scanf("%f", &kg_maca);

    if (kg_morango <= 5) {
        preco_morango = kg_morango * 2.50;
    } else {
        preco_morango = kg_morango * 2.20;
    }

    if (kg_maca <= 5) {
        preco_maca = kg_maca * 1.80;
    } else {
        preco_maca = kg_maca * 1.50;
    }

    valor_total = preco_morango + preco_maca;

    if ((kg_morango + kg_maca > 8) || (valor_total > 25.00)) {
        desconto = valor_total * 0.10;
        valor_total -= desconto;
    }

    printf("\nValor a ser pago: R$ %.2f\n", valor_total);   
}