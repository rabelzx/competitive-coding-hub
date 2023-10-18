#include <stdio.h>

int findMinMoves(int a, int b){
  int difference, moves; 

  if(a == b)
    return 0; 
  else if(a < b){
    difference = b - a;
    if(difference % 10 == 0)
      return difference / 10;
    else
      return (difference / 10) + 1; 
  }
  //a > b
  else{
    difference = a - b; 
    if(difference % 10 == 0)
      return difference / 10;
     else
      return (difference / 10) + 1; 
  }
    
}

int main() {
  int cases, a, b, minMoves; 
  scanf("%d", &cases); 

  for(int i = 0; i < cases; i++){
    scanf("%d %d", &a, &b);
    minMoves = findMinMoves(a, b); 
    printf("%d\n", minMoves); 
  }
 
  return 0;
}