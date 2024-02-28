#include <stdio.h>

int main(){
    int idade = 0;
    float peso = 0.0;
    printf("Valor inicial da idade: %d.\n", idade);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Idade informada: %d\n", idade);
    printf("Peso Informado: %.2f\n", peso);
}