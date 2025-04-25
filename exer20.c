#include <stdio.h>

int main() {
    float odometroInicial, odometroFinal, litrosGastos, valorRecebido;
    float precoCombustivel = 2.90; 
    float distanciaPercorrida, mediaConsumo, custoCombustivel, lucroLiquido;

    // Entrada de dados
    printf("Digite a marcacao do odometro no início do dia (em Km): ");
    scanf("%f", &odometroInicial);

    printf("Digite a marcação do odômetro no final do dia (em Km): ");
    scanf("%f", &odometroFinal);

    printf("Digite o número de litros de combustivel gasto: ");
    scanf("%f", &litrosGastos);

    printf("Digite o valor total recebido dos passageiros (em R$): ");
    scanf("%f", &valorRecebido);

    distanciaPercorrida = odometroFinal - odometroInicial;

    mediaConsumo = distanciaPercorrida / litrosGastos;

    custoCombustivel = litrosGastos * precoCombustivel;

    lucroLiquido = valorRecebido - custoCombustivel;

    printf("Mrdia de consumo: %.2f Km/L\n", mediaConsumo);
    printf("Lucro liquido do dia: R$ %.2f\n", lucroLiquido);

    return 0;
}
