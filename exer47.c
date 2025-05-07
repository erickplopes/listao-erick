#include <stdio.h>

int main() {
    int codigo;
    
    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigo);

    printf("Região de procedencia: ");

    if (codigo == 1) {
        printf("Sul\n");
    } 
    else if (codigo == 2) {
        printf("Norte\n");
    } 
    else if (codigo == 3) {
        printf("Leste\n");
    } 
    else if (codigo == 4) {
        printf("Oeste\n");
    } 
    else if (codigo == 5 || codigo == 6) {
        printf("Nordeste\n");
    } 
    else if (codigo >= 7 && codigo <= 9) {
        printf("Sudeste\n");
    } 
    else if (codigo == 10) {
        printf("Centro-Oeste\n");
    } 
    else if (codigo == 11) {
        printf("Noroeste\n");
    } 
    else {
        printf("Importado\n");
    }
}