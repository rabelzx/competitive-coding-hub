#include <stdio.h>
 
int main(void) {
 
  float g, d, r, valor; 
  scanf("%f %f %f", &g, &d, &r);
 
  if(d == 0){
    valor = (1000.0 * r) / g; 
  } else{
    g -= g * d / 100.0; 
    valor = 1000.0 * r;
    valor /= g; 
  }
 
  printf("%f", valor); 
  
  return 0;
}