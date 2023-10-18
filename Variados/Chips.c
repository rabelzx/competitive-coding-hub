#include <stdio.h>

int encontraResto(int n, int chips){
  while(chips > 0){
    for (int i = 1; i <= n; i++){
      if(chips - i < 0)
        return chips; 
      chips -= i; 
    }
  }
    return chips; 
}


int main(void) {
  int n, chips; 
  scanf("%d %d", &n, &chips); 
  
  printf("%d\n", encontraResto(n, chips)); 
  
  return 0;
}