#include <stdio.h>
#include <math.h>

  //n -> quantidade de numeros
  //l -> quantidade minima de numeros diferentes
  //r -> quantidade maxima de numeros diferentes

int main() {
  int n, l, r, aux; 
  scanf("%d %d %d", &n, &l, &r); 

  int somaMin = 0, somaMax = 0, count; 

  //logica da soma minima
  if(l == 1)
    somaMin = n; 
  else{
    //quantidade maxima de vezes que podemos somar o 1
    somaMin += n - l + 1;  
    
    while(l - 1 > 0){
      l--; 
      somaMin += pow(2, l); 
    }
  }

  //logica da soma maxima
  if (r == 1) {
    somaMax = n;
  } else {
    somaMax = pow(2, r) + pow(2, r - 1) * (n - r) - 1;
  }
  
  
  printf("%d %d\n", somaMin, somaMax);
  
  
  return 0;
}