#include <stdio.h>

void equalize(int *values, int maxValue, int n){
  int burles = 0; 
  
  for(int i = 0; i < n; i++)
    burles += maxValue - values[i]; 
  
  printf("%d\n", burles); 
}

int main(void) {
  int n, a, maxValue = 0;
  
  scanf("%d", &n);
  int values[n]; 

  //preenche o vetor
  for(int i = 0; i < n; i++){
    scanf("%d", &a); 
    values[i] = a; 
    if(a > maxValue)
      maxValue = a; 
  }

  equalize(values, maxValue, n); 

  
  return 0;
}