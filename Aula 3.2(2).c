#include <stdio.h>

int main(){
    int n1, n2 , soma , sub, mult, divi;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    divi = n1 / n2;

    printf("Resultados:\n");
    printf("Resutado da Soma foi de: %d\n", soma);
    printf("Resultado da Sub foi: %d\n", sub);
    printf("Resultado da mult foi: %d\n", mult);
    printf("Resultado da div foi: %d\n", divi);
}