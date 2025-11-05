#include <stdio.h>

int main() {

//jogo batalha naval com matrizes

//tabuleiro 5x5
    int tabuleiro[5][5] = {0}; // Inicializa o tabuleiro com 0 (vazio)
int i, j;
  
// Posiciona um navio verticalmente (3 partes)
   
for (i = 0; i < 3; i++) {
        tabuleiro[i][1] = 3; // 3 representa uma parte do navio
    }

    // Posiciona um navio horizontalmente (2 partes)

    for (j = 0; j < 2; j++) {
        tabuleiro[1][j + 3] = 3; // 3 representa uma parte do navio
    }


    // Exibe as coordenadas dos navios 

    printf("Navio Vertical (3 partes):\n");
    for (i = 0; i < 3; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, i, 1);
    }

    printf("Navio Horizontal (2 partes):\n");
    for (j = 0; j < 2; j++) {
        printf("Parte %d: (%d, %d)\n", j + 1, 1, j + 3);
    }

    //matriz bidimensional 10x10

    int tabuleiro10x10[10][10] = {0}; // Inicializa

    // Posiciona navios, incluindo dois na diagonal
    // Navio 1 (vertical)

    for (i = 0; i < 3; i++) {
        tabuleiro10x10[i][1] = 3; // 3 representa uma parte do navio
    }

    // Navio 2 (horizontal)

    for (j = 0; j < 2; j++) {
        tabuleiro10x10[1][j + 3] = 3; // 3 representa uma parte do navio
    }

    //exibindo o tabuleiro 10x10
     
    printf("\nTabuleiro 10x10 com Navios:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro10x10[i][j]);
        }
        printf("\n");
    }

    // Habilidades Especiais com Matrizes
    
    int habilidadeCone[5][5] = {0};
    int habilidadeCruz[5][5] = {0};
    int habilidadeOctaedro[5][5] = {0};

    // Preenche a habilidade em cone
    
    habilidadeCone[0][2] = 1;
    habilidadeCone[1][1] = 1; habilidadeCone[1][2] = 1; habilidadeCone[1][3] = 1;
    habilidadeCone[2][0] = 1; habilidadeCone[2][1] = 1; habilidadeCone[2][2] = 1; habilidadeCone[2][3] = 1; habilidadeCone[2][4] = 1;

    // Preenche a habilidade em cruz
    
    habilidadeCruz[0][2] = 1;
    habilidadeCruz[1][2] = 1;
    habilidadeCruz[2][0] = 1; habilidadeCruz[2][1] = 1; habilidadeCruz[2][2] = 1; habilidadeCruz[2][3] = 1; habilidadeCruz[2][4] = 1;

    // Preenche a habilidade em octaedro
    
    habilidadeOctaedro[0][2] = 1;
    habilidadeOctaedro[1][1] = 1; habilidadeOctaedro[1][2] = 1; habilidadeOctaedro[1][3] = 1;
    habilidadeOctaedro[2][0] = 1; habilidadeOctaedro[2][1] = 1; habilidadeOctaedro[2][2] = 1; habilidadeOctaedro[2][3] = 1; habilidadeOctaedro[2][4] = 1;

    // Exibe a habilidade em cone
    
    printf("Habilidade em Cone:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidadeCone[i][j]);
        }
        printf("\n");
    }

    // Exibe a habilidade em cruz
    
    printf("\nHabilidade em Cruz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidadeCruz[i][j]);
        }
        printf("\n");
    }

    // Exibe a habilidade em octaedro
    
    printf("\nHabilidade em Octaedro:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidadeOctaedro[i][j]);
        }
        printf("\n");
    }

    //posicione navios no tabuleiro 10x10
    // Navio 3 (diagonal)

    for (i = 0; i < 3; i++) {
        tabuleiro10x10[i + 5][i + 5] = 3; // 3 representa uma parte do navio na diagonal
    }

    //navio 4 (horizontal na parte inferior)
    for (j = 0; j < 4; j++) {
        tabuleiro10x10[8][j + 2] = 3; // 3 representa uma parte do navio
    }
    
    //exibir o tabuleiro
    printf("\nTabuleiro 10x10 com Todos os Navios:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro10x10[i][j]);
        }
        printf("\n");
    }

    //condicionais para jogadas
    int linha, coluna;
    int acertos = 0;
    int total_navios = 11; // Total de células ocupadas por navios (3 + 2 + 3 + 4)
    
    while (acertos < total_navios) {
        printf("\nDigite a linha (0-9): ");
        scanf("%d", &linha);
        printf("Digite a coluna (0-9): ");
        scanf("%d", &coluna);
        
        if (linha < 0 || linha > 9 || coluna < 0 || coluna > 9) {
            printf("Posição inválida! Tente novamente.\n");
            continue;
        }
        
        if (tabuleiro10x10[linha][coluna] == 3) {
            printf("Acertou um navio!\n");
            tabuleiro10x10[linha][coluna] = 1;
            acertos++;
        } else {
            printf("Água!\n");
            tabuleiro10x10[linha][coluna] = 2;
        }
    }
    
    printf("\nParabéns! Você afundou todos os navios!\n");
    return 0;
}
