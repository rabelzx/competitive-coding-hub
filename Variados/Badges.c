#include <stdio.h>

int findMinBadges(int b, int g, int n){
  int badges = 0; 
  
  for(int i = 0; i <= b; i++){
    for(int j = 0; j <= g; j++){
      if(i + j == n){
        badges++; 
      }
    }
  }
  
  return badges; 
  
}

int main(void) {
  int b, g, n, minBadges; 
  scanf("%d %d %d", &b, &g, &n); 

  minBadges = findMinBadges(b, g, n); 
  printf("%d\n", minBadges);
  
  return 0;
}