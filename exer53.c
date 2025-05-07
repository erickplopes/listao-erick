#include <stdio.h>

int main(){
    int valor;

    printf("informe um numero inteiro: ");
    scanf("%d", &valor);

    if (valor < 0){
        printf("O valor %d é negativo, insira novamente", valor);
    }


    if (valor % 2 == 0){
        printf("o numero %d é par", valor);
    } else { 
        printf("o numero %d é impar", valor);
    }
}