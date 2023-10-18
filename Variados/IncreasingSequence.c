#include <stdio.h>

int main(void) {
  int n, d, anterior, atual, resto, moves = 0;
  scanf("%d %d %d", &n, &d, &anterior);

  for(int i = 0; i <= n; i++){
    scanf("%d", &atual);

    if(atual <= anterior) {
      int resto = anterior - atual; 
      
      if(resto == 0){
        moves++; 
        atual += d; 
      }
      else if(resto % d != 0){
        moves += (resto / d) + 1; 
        atual += resto * d + d;  
      }
    }

    printf("%d\n", atual); 
    anterior = atual;
  }

  printf("\n\nmovimentos -> %d\n", moves );

  return 0;
}
