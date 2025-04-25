#include <stdio.h>

int main() {
    float comprimentoPista, consumoCombustivel, distanciaTotal, distanciaReabastecimento;
    int numeroVoltas, numeroReabastecimentos;
    float litrosNecessarios;

    // Entrada de dados
    printf("Digite o comprimento da pista (em metros): ");
    scanf("%f", &comprimentoPista);

    printf("Digite o numero total de voltas a serem percorridas: ");
    scanf("%d", &numeroVoltas);

    printf("Digite o numero de reabastecimentos desejados: ");
    scanf("%d", &numeroReabastecimentos);

    printf("Digite o consumo de combustivel do carro (em Km/L): ");
    scanf("%f", &consumoCombustivel);

    distanciaTotal = comprimentoPista * numeroVoltas;

    distanciaReabastecimento = distanciaTotal / numeroReabastecimentos;

    distanciaReabastecimento = distanciaReabastecimento / 1000;  

    litrosNecessarios = distanciaReabastecimento / consumoCombustivel;

    printf("O numero minimo de litros necessarios para o primeiro reabastecimento: %.2f litros\n", litrosNecessarios);

    return 0;
}
