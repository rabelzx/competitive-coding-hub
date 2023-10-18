#include <stdio.h>
#include <string.h>

int main() {
  int b1, b2, b3, g1, g2, g3, c1, c2, c3; 

  // ORDEM = (B -> G -> C)
  while(scanf("%d %d %d %d %d %d %d %d %d", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3) == 9){
    //BCG 
    int minMoves = b2 + b3 + c1 + c3 + g1 + g2; 
    char order[] = "BCG"; 

    //BGC
    int moves = b2 + b3 + g1 + g3 + c1 + c2; 
    if(moves < minMoves){
      minMoves = moves; 
      strcpy(order, "BGC"); 
    }

    //CBG
    moves = c2 + c3 + b1 + b3 + g1 + g2;
    if (moves < minMoves) {
      minMoves = moves;
      strcpy(order, "CBG");
    }

    //CGB
    moves = c2 + c3 + g1 + g3 + b1 + b2;
    if (moves < minMoves) {
      minMoves = moves;
      strcpy(order, "CGB");
    }

    //GBC
    moves = g2 + g3 + b1 + b3 + c1 + c2;
    if (moves < minMoves) {
      minMoves = moves;
      strcpy(order, "GBC");
    }

    //GCB
    moves = g2 + g3 + c1 + c3 + b1 + b2;
    if (moves < minMoves) {
      minMoves = moves;
      strcpy(order, "GCB");
    }

    printf("%s %d\n", order, minMoves);
  }

  return 0;
}
    
