#include <stdio.h>
#include <string.h>

int main(void) {
  int n, iguais = 1;
  scanf("%d", &n);  

  // +1 para acomodar o catactere nulo 
  char palavra[n + 1]; 
  scanf("%s", palavra); 

  int tamanho = strlen(palavra);

  if (tamanho % 2 != 0) {
    printf("No\n");
  } else {
    tamanho /= 2;
    
    for (int i = 0; i < tamanho; i++) {
      if (palavra[i] != palavra[i + tamanho]) {
        iguais = 0; 
        break;
      }
    }
    
    if (iguais)
      printf("Yes\n"); 
    else
      printf("No\n"); 
  }

  return 0;
}
