#include <stdio.h>

int main(){
    int A, B, soma, subtr, mult, div;

    printf("Digite o primeiro valor: ");
    scanf("%d", &A);

    printf("Digite o segundo valor: ");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    div = A / B;

    printf("Resultados:/n");
    printf("Resultado da Soma: %d\n", soma);
    printf("Resultado da Subtração: %d\n", subtr);
    printf("Resultado da Multiplicação: %d\n", mult);
    printf("Resultado da Divisão: %d\n", div);
}