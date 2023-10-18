#include <stdio.h>

int main(void) {
  int t; 

  scanf("%d", &t); 

  for(int i = 1; i <= t; i++){
    int a, b, pontos, resto; 
    scanf("%d %d", &a, &b); 
    if(b <= 3){
      pontos = a; 
      if(pontos == 1)
        printf("Caso %d: %d ponto\n", i, pontos); 
      else
        printf("Caso %d: %d pontos\n", i, pontos); 
    } else if (b > 3 && b <= 7) {
      resto = b - 3; 
      pontos = a + (resto * 100); 
      pontos = pontos + pontos * 0.25; 
      printf("Caso %d: %d pontos\n", i, pontos); 
    } else {
      resto = b - 3; 
      pontos = a + (resto * 100); 
      pontos = pontos + pontos * 0.50; 
      printf("Caso %d: %d pontos\n", i, pontos); 
    }
   
    }
  
  return 0;
        }