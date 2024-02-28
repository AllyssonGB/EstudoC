#include <stdio.h>

int main(){
    int v[10];
    int s = 0, n1;

    for(n1=0;n1<10;n1=n1+1){
        printf("Digite um numero:\n");
        scanf("%d", &v[n1]);
        s += v[n1];
    }

    printf("Numeros Informados e o Resultado da Soma.\n");
    for(n1=0;n1<10;n1=n1+1){
        printf("%d ", v[n1]);
    }
    printf("\nResultado Final: %d", s);


}