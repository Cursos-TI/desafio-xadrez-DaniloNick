#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int menu;
    int moveBispo = 5;
    int moveTorre = 5;
    int moveRainha = 8;
    int i = 1;

    printf("Qual peca vc ira mexer?\n 1.Bispo \n 2.Torre \n 3.Rainha\n");
    scanf("%i", &menu);


    switch(menu){

        case 1: //Case do Bispo, enquanto a variavel "i" nao for igual ao valor de movimento do bispo, sera impresso seu movimento na diagonal.
            while (i<=moveBispo) //condicao do loop
            {
                printf("Cima \nDireita \n"); //imprimindo movimentacao na diagonal.
                i++; //incremento do indice.
            }                          
            break;
        case 2: 
            for(i = 1; i <= moveTorre; i++){
                printf("Direita\n");
            }
            
            break;
        case 3: 
            
            break;
    }

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

    return 0;
}
