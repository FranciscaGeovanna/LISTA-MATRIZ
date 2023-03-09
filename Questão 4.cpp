#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
    int a[2][2] = {{2, 3},{1, 4}};
    int c;
    
    printf("Programa para calcular o determinante da matriz \n\n");
    
    c = ((a[0][0] * a[1][1]) - (a[0][1] * a[1][0]));
    
    printf("O determinante dessa matriz é: %d ", c);
    
    return 0;
}
