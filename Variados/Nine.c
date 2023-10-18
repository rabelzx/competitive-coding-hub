#include <stdio.h>

int main(void) {
  int a, b; 
  scanf("%d %d", &a, &b); 

  if(b - a == 1 && a != 3 && a != 6)
    printf("Yes\n"); 
  else 
    printf("No\n");

  return 0;
}