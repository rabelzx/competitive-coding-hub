#include <stdio.h>

int main(void) {
  int a, b, c; 
  scanf("%d %d %d", &a, &b, &c); 

  a = a + b + c;
  if(a >= 22)
    printf("bust\n"); 
  else
    printf("win\n"); 
  
  return 0;
}