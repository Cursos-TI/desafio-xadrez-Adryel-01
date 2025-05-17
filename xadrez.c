#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   
        int opcao, numTorre;


        printf("MOVIMENTAÇAO DE PEÇAS XADREZ\n");
        printf("\n O tabuleiro possui 3 peças, escolha uma para mover!\n");

        printf("\n1.Torre\n");
        printf("2.Bispo\n");
        printf("3.Rainha\n");
        printf("Escolha uma opção: ");
        scanf("%d", opcao);

            switch (opcao)
            {
            case 1:
                printf("Você selecionou a Torre. Quantas casas você quer movê-la?\n");
                printf("Escolha um número de 1 a 5: ");
                scanf("%d", numTorre);

                break;
            
            default:
                break;
            }

    return 0;
}
