#include <stdio.h>
#define LIN 3
#define COL 3

int main(){
	int b[LIN][COL], a[LIN][COL] = {1,4,7,2,5,8,3,6,9};
	
	for(int i = 0; i < LIN; ++i){ 
		for(int j = 0; j < COL; ++j){
			b[i][j] = a[j][i];
		}
	}
	
	for(int h = 0; h < LIN; ++h){ 
		for(int k = 0; k < COL; ++k){
			printf("Matriz[%d][%d] = %d \n",h, k, b[h][k]);
		}
	} 
	
	return 0;
}
