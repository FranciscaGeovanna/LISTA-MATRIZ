#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int A[2][2] = {1, 2, 3, 4};
	int B[2][2];
	int ib = 0, jb = 0; 
	
	printf("Programa para calcular a matriz de rotação de 90 graus \n\n");
	
	for(int j = 0; j <= 1; j++){
		jb = 0;
		for(int i = 2 - 1; i >= 0; i--){
			B[ib][jb] = A[i][j];
			jb++;
		}
		ib++;
	}
	
	for(int i = 0; i < 2; ++i){
		for(int j = 0; j < 2; ++j){
			printf("|%d", B[i][j]);
		}
		printf ("|\n");
	}
	
	return 0;
}
