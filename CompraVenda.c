#include <stdio.h>

int main(){
    float v[5] = {0, 0, 0, 0, 0};
    int d[2] = {0, 0};

    for(v[0]=0;v[0]==0;v[0]=v[0]+1){    // Vetor com indice 0 vai ser o ponto de partida das condiçoes
        printf("Digite uma quantidade em dinheiro pra adiciona a sua conta: ");  // indice 1 vai ser o dinheiro
        scanf("%f", &v[1]);
        fflush(stdin);
    }
    while(v[0] == 1){
        printf("Digite a Loja que Deseja Compra 1 - Loja do Gilvan  2 - Loja do Andre  3 - Loja do Lucas  4 - Saldo/EstoqueAtual  5 - Venda  6 - Finaliza Programa\n");
        scanf("%f", &v[2]); // Indice 2 vai ser a opção do menu principal
        fflush(stdin);
        v[0] = 100; // no final o indice 0 vira 100 pra n volta pro loop infinito
        if(v[2] < 1 || v[2] > 6){
                printf("Comando Invalido Tente Novamente\n");
                v[0] = 1;
            }
        if(v[2] == 1){
            printf("Bem Vindo a Loja de Gilvan Cada Produto custa R$2.50\n");
            printf("Digite a quantidade de produtos que deseja Compra: ");
            scanf("%d", &d[0]); // o indice do D 0 vai ser a compra
            fflush(stdin);
            if(d[0] * 2.50 <= v[1]){
                v[3] = d[0] * 2.50; // V indice 3 sendo usado para armazena o valor nesse IF
                v[1] = v[1] - v[3];
                v[4] = v[4] + d[0]; // V indice 4 vai ser o estoque
                printf("Compra Concluida Saldo de %.2f e Estoque de %.2f\n", v[1], v[4]);
                v[0] = 1;
                continue;
            }
            if(d[0] * 2.50 > v[1]){
                v[3] = d[0] * 2.50;
                printf("Saldo Insuficiente  -  Saldo: %2.f Compra no Valor de %.2f\n", v[1], v[3]);
                v[0] = 1;
                continue;
            }
            else{
                printf("Erro no Programa , Finalizado");
                break;
            }
        }  // Final da Logica da Loja (Gilvan)
        if(v[2] == 2){
            printf("Bem Vindo a Loja do Andre Cada Produto Custa R$3.50\n");
            printf("Digite a Quantidade de produtos que deseja Compra: ");
            scanf("%d", &d[0]);
            fflush(stdin);
            if(d[0] * 3.50 <= v[1]){
                v[3] = d[0] * 3.50; 
                v[1] = v[1] - v[3]; // v indice 1 dinheiro
                v[4] = v[4] + d[0]; // Estoque v indice 4
                printf("Compra Concluida Saldo de %.2f e Estoque de %.2f\n", v[1], v[4]);
                v[0] = 1;
                continue;
            }
            if(d[0] * 3.50 > v[1]){
                v[3] = d[0] * 3.50;
                printf("Saldo Insuficiente  -  Saldo: %2.f Compra no Valor de %.2f\n", v[1], v[3]);
                v[0] = 1;
                continue;
            }
            else{
                printf("Erro no Programa , Finalizado");
                break;
            }
        }
        if(v[2] == 3){
            printf("Bem Vindo a Loja de Lucas Cada Produto Custa R$1.50\n");
            printf("Digite a Quantidade de produtos que deseja Compra: ");
            scanf("%d", &d[0]);
            fflush(stdin);
            if(d[0] * 1.50 <= v[1]){
                v[3] = d[0] * 1.50;
                v[1] = v[1] - v[3];
                v[4] = v[4] + d[0]; // indice V 4 e de estoque
                printf("Compra Concluida Saldo de %.2f e Estoque de %.2f\n", v[1], v[4]);
                v[0] = 1;
                continue;
            }
            if(d[0] * 1.50 > v[1]){
            v[3] = d[0] * 1.50;
            printf("Saldo Insuficiente  -  Saldo: %.2f Compra no Valor de %.2f\n", v[1], v[3]);
            v[0] = 1;
            continue;
            }
            else{
                printf("Erro no Programa, Finalizado");
                break;
            }
        }
        if(v[2] == 4){
            printf("Seu Saldo Atual e de: %.2f\n", v[1]); // indice V 1 e de dinheiro
            printf("Seu Estoque Atual e de: %.2f\n", v[4]); // Indice V 4 e de estoque
            v[0] = 1;
        }
        while(v[2] == 5){
            printf("Bem vindo a area de Vendas a quem deseja vende\n");
            printf("1 - Vende a Jhonatha  2 - Vende a Pacheco  3 - Vende a Gustavo  4 - Volta a Tela Inicial  5 - Finaliza Programa\n");
            scanf("%d", &d[1]); // Indice D 1 vai ser o responsavel pela decisão da parte de vendas
            fflush(stdin);
            v[2] = 100;
            if(d[1] > 5 || d[1] < 1){
                printf("Comando Invalido Tente Novamente\n");
                v[2] = 5;
            }
            if(d[1] == 1){
                printf("Jhonatha Quer Compra Produtos por R$7.00\n");
                printf("Digite a quantidade de Itens que Deseja Vende: ");
                scanf("%d", &d[0]);
                fflush(stdin);
                if(d[0] <= v[4]){
                    v[3] = d[0] * 7.00; // indice V 3 usado pra soma dos IF
                    v[4] = v[4] - d[0];
                    v[1] = v[1] + v[3];
                    printf("Venda Concluida Saldo de %.2f e Estoque de %.2f\n", v[1], v[4]);
                    v[2] = 5;
                    continue;
                }
                if(d[0] > v[4]){
                    printf("Voce nao tem estoque suficiente  \nEstoque: %.2f  \nQuantidade Itens da Venda: %d\n", v[4], d[0]);
                    v[2] = 5;
                    continue;
                }
                else{
                    printf("Erro no Sistema, Finalizado");
                    break;
                }
            }
            if(d[1] == 2){
                printf("Pacheco Quer Compra Produtos por R$4.50\n");
                printf("Digite a quantidade de Itens que Deseja Vende: ");
                scanf("%d", &d[0]);
                fflush(stdin);
                if(d[0] <= v[4]){
                    v[3] = d[0] * 4.50; // indice V 3 usado pra soma dos IF
                    v[4] = v[4] - d[0];
                    v[1] = v[1] + v[3];
                    printf("Venda Concluida Saldo de %.2f e Estoque de %.2f\n", v[1], v[4]);
                    v[2] = 5;
                    continue;
                }
                if(d[0] > v[4]){
                    printf("Voce nao tem estoque suficiente  \nEstoque: %.2f  \nQuantidade Itens da Venda: %d\n", v[4], d[0]);
                    v[2] = 5;
                    continue;
                }
                else{
                    printf("Erro no Sistema, Finalizado");
                    break;
                }
            }
            if(d[1] == 3){
                printf("Gustavo Quer Compra Produtos por R$12.50\n");
                printf("Digite a quantidade de Itens que Deseja Vende: ");
                scanf("%d", &d[0]);
                fflush(stdin);
                if(d[0] <= v[4]){
                    v[3] = d[0] * 12.50; // indice V 3 usado pra soma dos IF
                    v[4] = v[4] - d[0];
                    v[1] = v[1] + v[3];
                    printf("Venda Concluida Saldo de %.2f e Estoque de %.2f\n", v[1], v[4]);
                    v[2] = 5;
                    continue;
                }
                if(d[0] > v[4]){
                    printf("Voce nao tem estoque suficiente  \nEstoque: %.2f  \nQuantidade Itens da Venda: %d\n", v[4], d[0]);
                    v[2] = 5;
                    continue;
                }
                else{
                    printf("Erro no Sistema, Finalizado");
                    break;
                }
            }
            if(d[1] == 4){  // if pra volta pra o inicio no menu inicial no caso
                v[0] = 1;
            }
        }
        if(v[2] == 6 || d[1] == 5){
            printf("Programa Finalizado\n");
            printf("\nDinheiro: %2.f", v[1]);
            printf("\nEstoque: %2.f", v[4]);
        }
    }
}