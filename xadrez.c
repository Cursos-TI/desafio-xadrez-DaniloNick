#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int menu;
    int moveBispo = 5;
    int moveTorre = 5;
    int moveRainha = 8;
    int moveCavalo = 3;
    int i = 1;

    printf("Qual peca vc ira mexer?\n 1.Bispo\n 2.Torre\n 3.Rainha\n 4.Cavalo\n");
    scanf("%i", &menu);


    switch(menu){

        case 1: 
            while (i<=moveBispo) //Case do Bispo, enquanto a variavel "i" nao for igual ao valor de movimento do bispo, sera impresso seu movimento na diagonal.
            {
                printf("Cima e Direita(%i)\n",i); //imprimindo movimentacao na diagonal com indicativo de movimentacao.
                i++; //incremento do indice.
            }                          
            break;
        case 2: 
            for(i = 1; i <= moveTorre; i++){ //Case da Torre, enquanto o indice for menor que o "moveTorre", ira ser printado o movimento e seu indice.
                printf("Direita(%i)\n",i); //imprimindo movimentacao com indicativo de movimentacao.
            }            
            break;
        case 3: 
            while (i<=moveRainha) //Case da Rainha, enquanto o indice for menor que o "moveRainha", ira ser printado o movimento e seu indice.
            {
                printf("Esquerda(%i)\n",i); //imprimindo movimentacao com indicativo de movimentacao.
                i++; //incremento do indice.
            }            
            break;
        case 4:
            for(i=1;i<=2;i++){  //Case do Cavalo,condicao que fara o loop for ser executado apenas para acionar o while.
            
                while (i<moveCavalo) //loop verifica o indice i para executar o print e quando a condicao e satisfeita, volta para o for.
                {
                    printf("Baixo(%i)\n",i); //imprimindo movimentacao vertical com indicativo de movimentacao.
                    i++;
                }
                printf("Esquerda(%i)\n",i); //imprimindo movimentacao horizontal com indicativo de movimentacao.
            }
            break;
        default:
        printf("Escolha um opcao valida!\n"); //Mensagem indicando entrada invalida;
    }

    

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
