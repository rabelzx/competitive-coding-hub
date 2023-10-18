#include <stdio.h>

int main(void) {

  int N, A, B, C, sum;
  
  scanf("%d", &N);
  scanf("%d", &A);
  scanf("%d", &B);

  sum = A + B;

  for(int i = 1; i <= N; i++) {
    scanf("%d", &C);
    if( C == sum){
      printf("%d", i);
      break;
    }
  }
  
  return 0;
}