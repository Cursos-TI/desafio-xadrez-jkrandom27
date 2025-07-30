#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
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
    case 1:
        int i = 1;

        while (i <= 5){
            printf("Direita\n");
            i++;
        }
        break;

    case 2:
        int j = 1;
        do{
            printf("Cima\n");
            printf("Direita\n");
            j++;
        } while (j <= 4);
        break;

    case 3:
        for(int k = 0; k <= 7; k++){
            printf("Esquerda\n");
        }
        break;

    case 4:
        for(int l = 1; l < 2; l++){
            
            int m = 1;

            while(m <= 2){
                printf("Baixo\n");
                m++;
            }

            printf("Esquerda\n");
        }
        break;
    
    default:
        printf("Opção inválida, tente novamente.");
        break;
    }
    

    return 0;
    
    
}
