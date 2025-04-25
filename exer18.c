#include <stdio.h>
#include <math.h>  

int main() {
    float largura, comprimento, potenciaLampada, area, potenciaNecessaria;
    int numLampadas;

    printf("Digite a largura do comodo (em metros): ");
    scanf("%f", &largura);

    printf("Digite o comprimento do comodo (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a potencia da lampada (em watts): ");
    scanf("%f", &potenciaLampada);

    area = largura * comprimento;

    potenciaNecessaria = area * 18;

    numLampadas = (int)ceil(potenciaNecessaria / potenciaLampada);

    printf("Numero de lampadas necessarias: %d\n", numLampadas);

    return 0;
}
