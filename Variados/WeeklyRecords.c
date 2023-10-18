#include <stdio.h>

int main(void) {
  int n, steps; 

  scanf("%d", &n);

  for(int i= 0; i < n; i++){
    int totalSteps = 0; 
    for(int j = 0; j < 7; j++){
      scanf("%d", &steps);
      totalSteps += steps; 
    }
    printf("%d ", totalSteps); 
  }
  return 0;
}