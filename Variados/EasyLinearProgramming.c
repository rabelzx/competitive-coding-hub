#include <stdio.h>

int somaMaxima(int a, int b, int c, int k){
  if(k <= a)
    return k; 
  else if(k <= a + b)
    return a;
  else {
    int diferenca = k - (a + b);
    return a - diferenca; 
  }
}

int main(void) {
  int a, b, c, k, sum; 
  scanf("%d %d %d %d", &a, &b, &c, &k);
  
  sum = somaMaxima(a, b, c, k); 
  printf("%d\n", sum); 
  
  return 0;
}