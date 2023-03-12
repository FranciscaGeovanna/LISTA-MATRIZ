#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float A[2][2]; 
	float inv[2][2], dp = 1, ds = 1; 
	float det;
	
	printf ("Programa para calcular a matriz inversa\n\n");
	
	for(int l = 0; l < 2; ++l){
		for (int c = 0; c < 2; ++c){
			printf("Preencha a matriz: ");
			scanf("%f", &A[l][c]);
		}
	}
	
	printf ("\n");
	
	for(int i = 0; i < 2; i++){
		for (int j = 0; j < 2; ++j){
			if (i == j){
				dp *= A[i][j];
			}
		
			if(j == (2 - 1) - i){
			ds *= A[i][j];
			}
		}
	}
	
	printf ("Determinante: \n");
	
	det = dp - ds;
	
	for(int i = 0; i < 2; i++){
		for (int j = 0; j < 2; ++j){
			inv[i][j]  = A[i][j] / det;
		}
	}
	
	printf ("%.1f ", det);
	
	for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 2; ++j){
            if (j == (2 - 1) - i){
                inv [i][j] = -inv [i][j];
            }
        }
    }

	
	float aux = inv [0][0];
	inv[0][0] = inv [1][1];
	inv [1][1] = aux;
	
	printf ("\n\nMatriz original: \n");
	for (int l = 0; l < 2; ++l){
	    for (int c = 0; c < 2; ++c){
	        printf ("%.1f  ", A[l][c]);
	    }
	    printf ("\n");
	}
	
	printf ("\n\nMatriz inversa: \n");
	for(int i = 0; i < 2; ++i){
		for(int j = 0; j < 2; ++j){
			printf("%.1f   ", inv[i][j]);
		}
		printf ("\n");
	}
	
	return 0;
}