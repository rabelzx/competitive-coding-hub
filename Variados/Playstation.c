#include <stdio.h>

long long fatorial(int number){
  long long valor = 1; 
  for(int i = number; i >= 1; i--){
    valor *= i; 
  }
  return valor; 
}

int main(void) {
  int n;
  long long valor;
  scanf("%d", &n); 
  n--; 

  valor = fatorial(n); 

  printf("%lld\n", valor); 
  return 0;
}