#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
    int a[2][2] = {2, 3, 1, 4};
    int d, e, deter;
    
    printf("Programa para calcular o determinante da matriz \n\n");
    
    for(int i = 0; i < 1; i++){
    	for(int j = 0; j < 1; j++){
    		d = a[i][j] * a[i+1][j+1]; 
		}
	}
	
	for (int k = 0; k < 1; ++k){
		for(int l = 0; l < 1; ++l){
			e = a[k][l+1] * a[k+1][l];
		}
	}
	
	deter = d - e;
	
	printf("O determinante dessa matriz é: %d ", deter);
    
    return 0;
}
