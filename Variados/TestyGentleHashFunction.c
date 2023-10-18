#include <stdio.h>

int main() {
  int t, n, a, b, minValue = 0, bestCase; 
  scanf("%d", &t); 

  for(int i = 0; i < t; i++){
    scanf("%d", &n); 
    
    for(int j = 0; j < n; j++){
      scanf("%d %d", &a, &b); 
      if(a <= 10 && b > minValue){
          minValue = b; 
          bestCase = j + 1; 
      }
    }

    printf("%d\n", bestCase);
    minValue = 0; 
  }
  
  return 0;
}