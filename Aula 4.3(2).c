#include <stdio.h>

int main(){
    int n1;

    printf("Digite um numero conforme a semana (1/7): ");
    scanf("%d", &n1);

    switch(n1){
        case(1):
            printf("Hoje e Domingo");
            break;
        case(2):
            printf("Hoje e Segunda");
            break;
        case(3):
            printf("Hoje e Terça");
            break;
        case(4):
            printf("Hoje e Quarta");
            break;
        case(5):
            printf("Hoje e Quinta");
            break;
        case(6):
            printf("Hoje e Sexta");
            break;
        case(7):
            printf("Hoje e Sabado");
            break;
        default:
            printf("Comando Invalido");
    }
}