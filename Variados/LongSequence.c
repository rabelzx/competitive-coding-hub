#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  long int somaB = 0, *a, x; 
  scanf("%d", &n); 

  a = (long int*)malloc(sizeof(long int) * n);

  for(int i = 0; i < n; i++){
    scanf("%ld", &a[i]);
  }

  scanf("%ld", &x);
  int i = 0, p = 0;

  while(somaB <= x){
    somaB += a[i];
    
    i++;
    p++;
    
    if(i == n)
      i = 0; 
  }
  
  printf("%d", p); 
  
  return 0;
}