#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste, novoSalario;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste (ex: 10 para 10%%): ");
    scanf("%f", &percentualReajuste);

    novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);

    printf("O novo salario com reajuste: R$ %.2f\n", novoSalario);

    return 0;
}
