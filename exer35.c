#include <stdio.h>

int main(){
    float valor;

    printf("insira um valor: ");
    scanf("%f", &valor);

    if (valor > 0){
        printf("valor %.2f positivo", valor);
    } else if (valor < 0){
        printf("valor %.2f negativo", valor);
    } else {
        printf("valor zero");
    }
}