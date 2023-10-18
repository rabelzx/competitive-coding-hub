#include <stdio.h>
#define max 1024;

int main(void) {
  int n = 0, A[max;][max], B[max][max];

  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - 1; j++){
      scanf("%d", &A[i][j]);
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - 1; j++){
      printf("%d", A[i][j]);
    }
  }
  
  return 0;
}