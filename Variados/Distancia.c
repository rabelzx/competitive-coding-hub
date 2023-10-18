#include <stdio.h>

int main(void) {
  int distancia, minutos; 
  scanf("%d", &distancia);

  minutos = distancia * 60/ 30; 
  printf("%d\n", minutos); 

  return 0;
}