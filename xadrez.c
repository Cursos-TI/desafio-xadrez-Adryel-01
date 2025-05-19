#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

// Defini as variáveis que serão utilizadas no código

        int opcao, numTorre, numBispo, numRainha, i = 0, voltarAoMenu;
        char direcaoTorre;
        char direcaoBispo [10], direcaoRainha [10];

            printf("MOVIMENTAÇAO DE PEÇAS XADREZ\n");

// Adicionei um do while aqui, para que o programa não encerre se o usuário digitar uma opção inválida

        do
        {
            
            printf("\n\nO tabuleiro possui 3 peças, escolha uma para mover!\n");

            printf("\n1.Torre\n");
            printf("2.Bispo\n");
            printf("3.Rainha\n");
            printf("0.Sair\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);

// Esse if é para fazer com que se repita o código acima, se o usuário digitar qualquer outra opção.

            if (opcao == 0){

                printf("\nSaindo do programa...\n");
                break;

            } else if (opcao < 1 || opcao > 3){

                printf("\nOpção Inválida, tente novamente!\n");
                continue;
            }
        
// Entra no switch correspondente as peças do tabuleiro.

            switch (opcao)
            {
            case 1:

                printf("\nVocê selecionou a Torre. Quantas casas você quer movê-la?\n");
                printf("Escolha um número de 1 a 5: ");
                scanf("%d", &numTorre);

// Para interagir, coloquei a opção para o usuário definir quantas casas e a direção do movimento.

                printf("\nQual a direção que você quer movê-la?\n");
                printf("\nEscolha 'd' se for para direita;\n");
                printf("Escolha 'e' se for para esquerda;\n");
                printf("Escolha 'c' se for para cima;\n");
                printf("Escolha 'b' se for para baixo;\n");
                printf("\nEscolha a direção: ");
                scanf(" %c", &direcaoTorre);

//Escolhi o while para a torre

                while (i < numTorre)
                {
                
                if (direcaoTorre == 'd' || 'D')
                {
                    printf("\nDireita");
                } else if (direcaoTorre == 'e' || 'E')
                {
                    printf("\nEsquerda");
                } else if (direcaoTorre == 'c' || 'C')
                {
                    printf("\nCima");
                } else if (direcaoTorre == 'b' || 'B')
                {
                    printf("\nBaixo");
                } else
                {
                    printf("\nOpção Inválida!\n");
                }
                i++; 
            }
            break;

            case 2:

                printf("\nVocê selecionou o Bispo. Quantas casas você quer movê-lo?\n");
                printf("Escolha um número de 1 a 5: ");
                scanf("%d", &numBispo);

                printf("\nQual a direção na diagonal que você quer movê-lo?\n");
                printf("Escolha 'cd' se for na diagonal cima direita;\n");
                printf("Escolha 'ce' se for na diagonal cima esquerda;\n");
                printf("Escolha 'bd' se for na diagonal baixo direita;\n");
                printf("Escolha 'be' se for na diagonal baixo esquerda;\n");
                printf("\nEscolha a direção: ");
                scanf(" %s", &direcaoBispo);

                do
                {
                    if (direcaoBispo == 'cd' || 'CD' || 'cD' || 'Cd')
                    {
                        printf("\nCima Direita");
                    } else if (direcaoBispo == 'ce' || 'CE' || 'cE' || 'Ce')
                    {
                        printf("\nCima Esquerda");
                    } else if (direcaoBispo == 'bd' || 'BD' || 'bD' || 'Bd')
                    {
                        printf("\nBaixo direita");
                    } else if (direcaoBispo == 'be' || 'BE' || 'bE' || 'Be')
                    {
                        printf("\nBaixo Esquerda");
                    } else
                    {
                        printf("\nOpção Inválida!\n");
                    }
                    i++; 
                } while (i < numBispo);
                
            
            break;

            case 3:

                printf("\nVocê selecionou a Rainha. Quantas casas você quer movê-la?\n");
                printf("Escolha um número de 1 a 8: ");
                scanf("%d", &numRainha);

                printf("\nQual a direção que você quer movê-la?\n");

                printf("\nEscolha 'd' se for para direita;\n");
                printf("Escolha 'e' se for para esquerda;\n");
                printf("Escolha 'c' se for para cima;\n");
                printf("Escolha 'b' se for para baixo;\n");
                printf("Escolha 'cd' se for na diagonal cima direita;\n");
                printf("Escolha 'ce' se for na diagonal cima esquerda;\n");
                printf("Escolha 'bd' se for na diagonal baixo direita;\n");
                printf("Escolha 'be' se for na diagonal  baixo esquerda;\n");
                printf("\nEscolha a direção: ");
                scanf(" %s", &direcaoRainha);

            break;
            }

            } while (1);



    return 0;
}
