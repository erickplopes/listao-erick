#include <stdio.h>
#include <math.h>  

int main() {
    float comprimento, largura, altura, areaParedes, caixasAzulejos;

    printf("Digite o comprimento da cozinha (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura da cozinha (em metros): ");
    scanf("%f", &largura);

    printf("Digite a altura da cozinha (em metros): ");
    scanf("%f", &altura);

    areaParedes = 2 * (comprimento * altura) + 2 * (largura * altura);

    caixasAzulejos = ceil(areaParedes / 1.5);

    printf("Quantidade de caixas de azulejos necessarias: %.0f\n", caixasAzulejos);

    return 0;
}
