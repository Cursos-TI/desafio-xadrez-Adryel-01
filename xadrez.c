#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

// Defini as variáveis que serão utilizadas no código

        int opcao, numTorre, numBispo, numRainha, i = 0, voltarAoMenu;
        char direcaoTorre;
        int direcaoBispo, direcaoRainha, direcaoCavalo;

            printf("MOVIMENTAÇAO DE PEÇAS XADREZ\n");

// Adicionei um do while aqui, para que o programa não encerre se o usuário digitar uma opção inválida

        do
        {
            
            printf("\n\nO tabuleiro possui 4 peças, escolha uma para mover!\n");

            printf("\n1.Torre\n");
            printf("2.Bispo\n");
            printf("3.Rainha\n");
            printf("4.Cavalo\n");
            printf("0.Sair\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);

// Esse if é para fazer com que se repita o código acima, se o usuário digitar qualquer outra opção.

            if (opcao == 0){

                printf("\nSaindo do programa...\n");
            break;

// Esse if é para fazer com que se repita o código acima, se o usuário digitar qualquer outra opção.

            } else if (opcao < 1 || opcao > 4){

                printf("\nOpção Inválida, tente novamente!\n");
            continue;
            }
        
// Entra no switch correspondente as peças do tabuleiro.

            switch (opcao)
            {
            case 1:

// Utilizei o do while aqui para continuar o código apenas se o uuário digitar um número de 1 a 5;

                do
                {
                    printf("\nVocê selecionou a Torre. Quantas casas você quer movê-la?\n");
                    printf("Escolha um número de 1 a 5: ");
                    scanf("%d", &numTorre);

                        if (numTorre < 1 || numTorre > 5)
                        {
                            printf("\nErro. Digite um número de 1 a 5 para continuar.\n");
                        continue;
                        }
                        
                } while (numTorre < 1 || numTorre > 5);

// Para interagir, coloquei a opção para o usuário definir quantas casas e a direção do movimento.

                    printf("\nQual a direção que você quer movê-la?\n");

// Utilizei o do while mais uma vez para não encerrar o programa se o usuário digitar outras opções.

                    do
                    {
                        printf("\nEscolha 'd' se for para direita;\n");
                        printf("Escolha 'e' se for para esquerda;\n");
                        printf("Escolha 'c' se for para cima;\n");
                        printf("Escolha 'b' se for para baixo;\n");
                        printf("\nEscolha a direção: ");
                        scanf(" %c", &direcaoTorre);

                        if (direcaoTorre != 'd' && direcaoTorre != 'D' &&
                            direcaoTorre != 'e' && direcaoTorre != 'E' &&
                            direcaoTorre != 'c' && direcaoTorre != 'C' &&
                            direcaoTorre != 'b' && direcaoTorre != 'B')
                        {
                            printf("\nDireção errada.");
                            continue;
                        }
                        
                } while (direcaoTorre != 'd' && direcaoTorre != 'D' &&
                         direcaoTorre != 'e' && direcaoTorre != 'E' &&
                         direcaoTorre != 'c' && direcaoTorre != 'C' &&
                         direcaoTorre != 'b' && direcaoTorre != 'B');
                
//Escolhi o while para a torre

                while (i < numTorre)
                {
                
                if (direcaoTorre == 'd' && direcaoTorre == 'D')
                {
                    printf("\nDireita");
                } else if (direcaoTorre == 'e' && direcaoTorre == 'E')
                {
                    printf("\nEsquerda");
                } else if (direcaoTorre == 'c' && direcaoTorre == 'C')
                {
                    printf("\nCima");
                } else
                {
                    printf("\nBaixo");
                }
                i++; 
            }
            break;

// Código se escolher o bispo. 
//Obs.: Para toda a entrada do usuário, foi colocado um do while, afim de manter o jogo intuitivo.

            case 2:

                    printf("\nVocê selecionou o Bispo. Quantas casas você quer movê-lo?\n");
                    
                do
                {
                    printf("Escolha um número de 1 a 5: ");
                    scanf("%d", &numBispo);

                        if (numBispo < 1 || numBispo > 5)
                        {
                            printf("\nErro. Digite um número de 1 a 5 para continuar.\n");

                        continue;
                        }
                        
                } while (numBispo < 1 || numBispo > 5);
                

                printf("\nQual a direção na diagonal que você quer movê-lo?\n");

                do
                {
                    printf("\nEscolha 1 se for na diagonal cima direita;\n");
                    printf("Escolha 2 se for na diagonal cima esquerda;\n");
                    printf("Escolha 3 se for na diagonal baixo direita;\n");
                    printf("Escolha 4 se for na diagonal baixo esquerda;\n");
                    printf("\nEscolha a direção: ");
                    scanf(" %d", &direcaoBispo);

                        if (direcaoBispo < 1 || direcaoBispo > 4)
                        {
                            printf("\nDireção errada.");
                            continue;
                        }
                        
                } while (direcaoBispo < 1 || direcaoBispo > 4);

//Para o bispo, eu escolhi o do while para a funcionalidade do desafio.

                do
                {
                    if (direcaoBispo == 1)
                    {
                        printf("\nCima Direita");
                    } else if (direcaoBispo == 2)
                    {
                        printf("\nCima Esquerda");
                    } else if (direcaoBispo == 3)
                    {
                        printf("\nBaixo direita");
                    } else
                    {
                        printf("\nBaixo Esquerda");
                    } 
                    i++; 

                } while (i < numBispo);
                
            
            break;

//Código para a opção "Rainha".

            case 3:

                printf("\nVocê selecionou a Rainha. Quantas casas você quer movê-la?\n");

                do
                {
                    printf("Escolha um número de 1 a 8: ");
                    scanf("%d", &numRainha);

                        if (numRainha < 1 || numRainha > 8)
                        {
                            printf("\nErro. Digite um número de 1 a 8 para continuar.\n");

                        continue;
                        }
                        
                } while (numRainha < 1 || numRainha > 8);
            
                printf("\nQual a direção que você quer movê-la?\n");

                do
                {
                    printf("\nEscolha 1 se for para direita;\n");
                    printf("Escolha 2 se for para esquerda;\n");
                    printf("Escolha 3 se for para cima;\n");
                    printf("Escolha 4 se for para baixo;\n");
                    printf("Escolha 5 se for na diagonal cima direita;\n");
                    printf("Escolha 6 se for na diagonal cima esquerda;\n");
                    printf("Escolha 7 se for na diagonal baixo direita;\n");
                    printf("Escolha 8 se for na diagonal baixo esquerda;\n");
                    printf("\nEscolha a direção: ");
                    scanf(" %d", &direcaoRainha);

                        if (direcaoRainha < 1 || direcaoRainha > 8)
                        {
                            printf("\nDireção Inválida.");
                        }

                } while (direcaoRainha < 1 || direcaoRainha > 8);
                
// Escolhi o for para essa ocasião

                for (i ; i < numRainha; i++)
                {
                    if (direcaoRainha == 1)
                    {
                        printf("Direita\n");

                    } else if (direcaoRainha == 2)
                    {
                        printf("Esquerda\n");

                    } else if (direcaoRainha == 3)
                    {
                        printf("Cima\n");

                    } else if (direcaoRainha == 4)
                    {
                        printf("Baixo\n");

                    } else if (direcaoRainha == 5)
                    {
                        printf(" Diagonal Cima Direita\n");

                    } else if (direcaoRainha == 6)
                    {
                        printf("Diagonal Cima Esquerda\n");

                    } else if (direcaoRainha == 7)
                    {
                        printf("Diagonal Baixo Direita\n");

                    } else 
                    {
                        printf("Diagonal Baixo Esquerda\n");
                    }
                    
                }
                

            break;

            case 4:
            {

                printf("\nVocê selecionou o Cavalo! Qual a direção que você quer movê-lo?\n");

                do
                {
                    printf("\nEscolha 1 se for para direita e cima;\n");
                    printf("Escolha 2 se for para esquerda cima;\n");
                    printf("Escolha 3 se for para direita baixo;\n");
                    printf("Escolha 4 se for para esquerda baixo;\n");
                    printf("Escolha 5 se for para baixo e direita;\n");
                    printf("Escolha 6 se for para baixo e esquerda;\n");
                    printf("Escolha 7 se for para cima e direita;\n");
                    printf("Escolha 8 se for para cima e esquerda;\n");
                    printf("\nEscolha a direção: ");
                    scanf(" %d", &direcaoCavalo);

                        if (direcaoCavalo < 1 || direcaoCavalo > 8)
                        {
                            printf("Direção Inválida. Tente novamente!\n");
                            continue;
                        }
                            printf("\n");

                        switch (direcaoCavalo)
                        {
                        case 1: // direita e cima
                            
                            for(i ; i < 2 ; i++)
                            {
                                printf("Direita\n");
                            }
                                printf("Cima");
                            
                            break;
                        
                        default:
                            break;
                        }

                    
    
                        
                } while (direcaoCavalo < 1 || direcaoCavalo > 8);
                



            }
            break;


            }

            } while (1);



    return 0;
}
