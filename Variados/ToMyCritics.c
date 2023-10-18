#include <stdio.h>

int main(void) {
  int a, b, c, n; 
  scanf("%d", &n); 

  for(int i = 0; i < n; i++){
    scanf("%d %d %d", &a, &b, &c); 
    if(a + b >= 10 || a + c >= 10 || b + c >= 10)
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}