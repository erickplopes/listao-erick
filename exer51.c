#include <stdio.h>

int main(){
    int senha_correta = 1234;
    int senha_digitada;

    printf("informe a senha: ");
    scanf("%d", &senha_digitada);

    if (senha_digitada == senha_correta) {
        printf("ACESSO PERMITIDO");
        } else {
            printf("ACESSO NEGADO");
        }
}