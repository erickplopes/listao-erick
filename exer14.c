#include <stdio.h>

int main() {
    int carrosVendidos;
    float totalVendas, salarioFixo, comissaoPorCarro, salarioFinal;

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Digite o valor total das vendas: R$ ");
    scanf("%f", &totalVendas);

    printf("Digite o salario fixo do vendedor: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor que recebe por carro vendido: R$ ");
    scanf("%f", &comissaoPorCarro);

    salarioFinal = salarioFixo + (carrosVendidos * comissaoPorCarro) + (totalVendas * 0.05);

    printf("O salario final do vendedor: R$ %.2f\n", salarioFinal);

    return 0;
}
