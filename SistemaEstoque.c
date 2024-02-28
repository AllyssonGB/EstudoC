#include <stdio.h>

int main(){
    int v[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(v[0]=0;v[0]==0;v[0]=v[0]+1){  // em quanto v[0] for 0 isso aqui vai lupar // vai se transforma em 1 no primeiro loop
        printf("Digite a quantia de dinheiro inicial: ");
        scanf("%d", &v[1]); // variavel com indice 1 se transforma na quantidade de dinheiro
        fflush(stdin);
    }
    while(v[0] == 1){
        printf("Digite oque voce deseja fazer 1 - Compra  2 - Venda  3 - Finaliza Programa  4 - Saldo/Estoque\n");
        scanf("%d", &v[2]); // aqui no indice 2 vai ser o comando de escolher oque fazer
        fflush(stdin);        
        v[0] = 100;
        if(v[2] > 4 || v[2] < 1){
            printf("Erro no Programa Reinicie o Programa !!!");
        }
        if(v[2] == 1){
            printf("Diga a quantidade de produtos a compra: ");
            scanf("%d", &v[3]); // indice 3 vai ser a compra / venda
            fflush(stdin);
            if(v[3] <= v[1]){
                v[4] = v[4] + v[3];  // indice 4 e o estoque
                v[1] = v[1] - v[3];
                printf("Seu saldo atual e de %d e o estoque e de %d !\n", v[1], v[4]);
                v[0] = 1;
                continue;
            }
            if(v[3] > v[1]){
                printf("Saldo insuficiente !!\n");
                v[0] = 1;
            }
            else{
                printf("Erro no Programa Reinicie o Programa !!!");
            }
        }
        if(v[2] == 2){
            printf("Diga a quantidade de produtos a vende: ");
            scanf("%d", &v[3]); // indice 3 vai ser a compra / venda
            fflush(stdin);
            if(v[3] <= v[4]){
                v[1] = v[1] + v[3];
                v[4] = v[4] - v[3];
                printf("Seu saldo atual e de %d e o estoque e de %d !\n", v[1], v[4]);
                v[0] = 1;
            }
            if(v[3] > v[4]){
                printf("Estoque insuficiente!!\n");
                v[0] = 1;
            }
            else{
                printf("Erro no Programa Reinicie o Programa !!!");
            }
        }
        if(v[2] == 3){
            printf("Programa Finalizado , Seu Dinheiro e de %d , E o Estoque e de %d", v[1], v[4]);
        }
        if(v[2] == 4){
            printf("Seu Dinheiro e de %d Reais\n", v[1]);
            printf("Seu Estoque e de %d Produtos\n", v[4]);
            v[0] = 1;
        }
        
    }
}