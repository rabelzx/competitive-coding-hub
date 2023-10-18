#include <stdio.h>

int main(void) {

  int n, a, b; 
  scanf("%d %d %d", &n, &a, &b); 

  int posicoesValidas = 0; 

  for(int i = a + 1; i <= n; i++)
    if(n - i <= b) posicoesValidas++; 
  
  printf("%d\n", posicoesValidas);
  
  return 0;
}