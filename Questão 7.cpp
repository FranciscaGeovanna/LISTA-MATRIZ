#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int A[3][3]; //matriz
	int dig; 
	
	for(int l = 0; l < 3; ++l){
		for (int c = 0; c < 3; ++c){
			printf("Digite a matriz: ");
			scanf("%d", &A[l][c]);
		}
	}
	
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; ++j){
			if (i == j){
				A[i][j] = A[i][j];
			} else{
				A[i][j] = 0;
			}
		}
	}
	
		printf ("\n");
	
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
			printf("%d  ", A[i][j]);
		}
		printf ("\n");
	}
			
	return 0;
}
