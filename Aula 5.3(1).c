#include <stdio.h>

int main(){
    int n1 = 1;

    for(n1=1; n1<=10; n1=n1+1){    // Varivel inicial / Condição / Mudança de valor inicial pra n fica em loop infinito / Basicamente um while porem com o uma quantidade de vezes especificas que escolher
        printf("%d ", n1);
    }
}