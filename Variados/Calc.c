#include <stdio.h>
#include <math.h>

int main(void) {

  int a, sol; 
  scanf("%d", &a); 
  
  sol = pow(a, 1) + pow(a, 2) + pow(a, 3); 
  printf("%d\n", sol);
  
  return 0;
}