#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int A[2][2]; //matriz
	int dp = 1, ds = 1; // diagonal principal e secundária
	int det; 
	
	for(int l = 0; l < 2; ++l){
		for (int c = 0; c < 2; ++c){
			printf("Digite a matriz: ");
			scanf("%d", &A[l][c]);
		}
		printf("\n");
	}
	
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
	
	det = dp - ds;
	
	printf("Determinante: %d", det);

	
	return 0;
}
