#include <stdio.h>

void rodarMatriz(int n, int matriz[n][n]){
  int novaMatriz[n][n]; 



  printf("\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d", novaMatriz[i][j]); 
    }
    printf("\n"); 
  }
  
}


int main(void) {
  int n, temp; 
  scanf("%d", &n); 
  int matriz[n][n]; 

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      scanf("%1d", &matriz[i][j]); 
    }
  }

  rodarMatriz(n, matriz); 
  
  return 0;
}