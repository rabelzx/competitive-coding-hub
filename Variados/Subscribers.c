#include <stdio.h>
#include <math.h>

void truncate(int num, int digitos){
  int potencia = 1, sol;
  for (int i = 0; i < digitos; i++){
    potencia *= 10;
  }

  sol = num / potencia * potencia; 
  printf("%d\n", sol); 
}


int main(void) {
  int n; 

  scanf("%d", &n); 

  if(n <= pow(10, 3) - 1){
    printf("%d\n", n); 
  } else if(n <= pow (10, 4) - 1){
    truncate(n, 1); 
  } else if(n <= pow (10, 5) - 1){
    truncate(n, 2); 
  }  else if(n <= pow (10, 6) - 1){
    truncate(n, 3); 
  } else if(n <= pow (10, 7) - 1){
    truncate(n, 4); 
  } else if(n <= pow (10, 8) - 1){
    truncate(n, 5); 
  } else if (n <= pow (10, 9) - 1){
    truncate(n, 6); 
  }
 
  return 0;
}