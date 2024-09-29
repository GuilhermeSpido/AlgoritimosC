#include <stdio.h>

void main() {
    int M[5][5], SomaLin[5] = {0}, SomaCol[5] = {0};
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o elemento M[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            SomaLin[i] += M[i][j];
            SomaCol[j] += M[i][j];
        }
    }

    printf("Soma das Linhas: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", SomaLin[i]);
    }
    printf("\n");

    printf("Soma das Colunas: ");
    for (j = 0; j < 5; j++) {
        printf("%d ", SomaCol[j]);
    }
    printf("\n");
}
