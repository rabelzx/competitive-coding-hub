#include <stdio.h>

int main(void) {
  int n, a; 
  scanf("%d %d", &n, &a); 

    n = n % 500; 
    if(a >= n)
      printf("Yes\n"); 
    else
      printf("No\n"); 

  return 0;
}