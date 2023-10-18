#include <stdio.h>
#include <stdbool.h>

  bool ehPrimo(int num){
    for(int i = 2; i * i <= num; i++){
      if(num % i == 0){
        return false;
      }
    }
    return true; 
  }

  int proximoPrimo(int X) {
      int currentNum = X;
  
      while (true) {
          if (ehPrimo(currentNum)) {
              return currentNum;
          }
          currentNum++;
      }
  }

int main(void) {

  int x, minPrimo; 
  scanf("%d", &x);

  minPrimo = proximoPrimo(x); 
  printf("%d\n", minPrimo);
  
  return 0;
}