#include <stdio.h>

int main() {
    float custoFabrica, percDistribuidor = 28.0, percImpostos = 45.0;
    float valorDistribuidor, valorImpostos, custoFinal;

    printf("Digite o custo de fabrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    valorDistribuidor = (custoFabrica * percDistribuidor) / 100;
    valorImpostos = (custoFabrica * percImpostos) / 100;

    custoFinal = custoFabrica + valorDistribuidor + valorImpostos;

    printf("O custo final ao consumidor: R$ %.2f\n", custoFinal);

    return 0;
}
