#include <stdio.h>

int main(void) {
  int b1, b2, k1, k2; 
  scanf("%d %d %d %d", &b1, &b2, &k1, &k2); 

  if(b1 == b2)
    printf("Second\n");
  else if(b1 > b2)
    printf("First\n"); 
  else
    printf("Second\n"); 
  
  return 0;
}