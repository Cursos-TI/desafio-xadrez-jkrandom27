#include <stdio.h>

#define TORRE 5
#define BISPO 5
#define RAINHA 8
#define CAVALO 1

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

// Implementação de Movimentação do Bispo
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

// Implementação de Movimentação da Rainha
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

// Nível Aventureiro - Movimentação do Cavalo
// Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
// Um loop pode representar a movimentação horizontal e outro vertical.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.

void torre(int i){

    if(i > 0){
        //ação
        printf("Direita\n");
        //recusividade(parametro decremento)
        torre(i - 1);
    }
}

void bispo(int j){

    if(j > 0){
        //ação
        printf("Cima\n");
        printf("Direita\n");
        //recusividade(parametro decremento)
        bispo(j - 1);
    }
}

void rainha(int k){

    if(k > 0){
        //ação
        printf("Esquerda\n");
        //recusividade(parametro decremento)
        rainha(k - 1);
    }
}

int main() {
    
    //Menu
    int peca;

    printf("Bem-Vindo ao xadrez da quebrada:\n");
    printf("\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Escolha uma peça: ");
    
    //Entrada de Dados
    scanf("%d", &peca);

    //Lógica do programa
    switch (peca){

    //Torre
    case 1:
        torre(TORRE);
        break;

    //Bispo
    case 2:
        bispo(BISPO);
        break;
    
    //Rainha
    case 3:
        rainha(RAINHA);
    
    //Cavalo
    case 4:
        int direcaoFeita = 0;
        for (int i = 0; i < CAVALO; i++){
            for (int j = 0; j < 2; j++){
                printf("Cima\n");

                //Caso ande duas casas, pare!
                if (direcaoFeita == 2){
                    break;
                }
                
            }

            printf("Direita\n");
        }
        
        break;
    
    //Opção fora do menu
    default:
        printf("Opção inválida, tente novamente.");
        break;
    }
    
    
    return 0;
    
}
