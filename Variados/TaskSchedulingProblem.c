#include <stdio.h>

void ordenar(int* a1, int* a2, int* a3){
  int temp; 
  
  if(*a1 > *a2){
    temp = *a1;
    *a1 = *a2; 
    *a2  = temp; 
  }

  if(*a2 > *a3){
    temp = *a2; 
    *a2 = *a3;
    *a3 = temp; 
  }

  if(*a1 > *a2){
    temp = *a1;
    *a1 = *a2; 
    *a2  = temp; 
  }
  
}

int main(void) {
  int a1, a2, a3, custo = 0;  
  scanf("%d %d %d", &a1, &a2, &a3); 

  ordenar(&a1, &a2, &a3); 

  custo += a2 - a1;
  custo += a3 - a2; 
  
  printf("%d", custo); 
  
  return 0;
}