#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Portuguese_Brazil");
    
    int A[2][2];//matriz
    int mr[2][2] = {{-1, 0}, {0, 1}}; //matriz de reflexão 
    int y[2][2] = {{0, 0}, {0, 0}}; //resultado da matriz de reflexão em relação ao eixo y

    printf("Preencha a matriz\n");
    for (int l = 0; l < 2; l++) {
        for (int c = 0; c < 2; c++) {
            printf("Digite o valor da posição [%d][%d]: ", l, c);
            scanf ("%d", &A[l][c]);
        }
    }
    
    printf("\nMatriz original: \n");
    for (int l = 0; l < 2; l++){
        for (int c = 0; c < 2; c++){
            printf("%d  ", A[l][c]);
        }
        printf ("\n");
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                y[i][j] += A[i][k] * mr[k][j];
            }
        }
    }

    printf("\nMatriz de reflexão em relação ao eixo y:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d  ", y[i][j]);
        }
        printf("\n");
    }

    return 0;
}
