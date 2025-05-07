#include <stdio.h>

int main(){
    char nome, sexo;
    float altura, peso_ideal;

    printf("informe seu nome: ");
    scanf("%s", &nome);

    printf("informe seu sexo (M ou F): ");
    scanf(" %c", &sexo);

    printf("informe sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'M'){
        peso_ideal = (72.7 * altura) - 58;
    } else {
        peso_ideal = (62.1 * altura) - 44.7;
    }

    printf("seu peso ideal: %2.f", peso_ideal);
}