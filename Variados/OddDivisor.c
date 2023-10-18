#include <stdio.h>

int existOdd(long long number){
  for(long long i = number; i >= 3; i /= 2){
    if(i % 2 != 0 && number % i == 0) 
      return 1;
  }
  
  return 0; 
}

int main(void) {
  int n; 
  long long number; 

  scanf("%d", &n); 

  for(int i = 0; i < n; i++){
    scanf("%lld", &number); 
    if(existOdd(number))
      printf("YES\n"); 
    else
      printf("NO\n"); 
  }

  return 0;
}