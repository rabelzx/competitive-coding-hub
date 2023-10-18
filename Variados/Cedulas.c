#include <stdio.h>

int main(void) {
  int valor, cedulas = 0; 
  scanf("%d", &valor); 

  printf("%d\n", valor); 

  cedulas = valor / 100; 
  valor -= cedulas * 100; 
  printf("%d nota(s) de R$ 100,00\n", cedulas); 

  cedulas = valor / 50; 
  valor -= cedulas * 50; 
  printf("%d nota(s) de R$ 50,00\n", cedulas); 

  cedulas = valor / 20; 
  valor -= cedulas * 20; 
  printf("%d nota(s) de R$ 20,00\n", cedulas); 
  
  cedulas = valor / 10; 
  valor -= cedulas * 10; 
  printf("%d nota(s) de R$ 10,00\n", cedulas); 
  
  cedulas = valor / 5; 
  valor -= cedulas * 5; 
  printf("%d nota(s) de R$ 5,00\n", cedulas); 
  
  cedulas = valor / 2; 
  valor -= cedulas * 2; 
  printf("%d nota(s) de R$ 2,00\n", cedulas); 
  
  cedulas = valor / 1; 
  valor -= cedulas * 1; 
  printf("%d nota(s) de R$ 1,00\n", cedulas); 

  return 0;
}