#include <stdio.h>

int main(){
    int v[5] = {10, 20, 30 ,40 ,50};
    int n1;
    float s = 0;

    for(n1=0;n1<5;n1=n1+1){
        s = s + v[n1];     // o n1 vai passando indice por indice e a soma vai acumulando na variavel s
    }

    printf("Resultado: %.2f", s/5);
    v[1] = 1;
    printf("%d ", v[1]);
}