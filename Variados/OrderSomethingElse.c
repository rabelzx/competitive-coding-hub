#include <stdio.h>

int main(void) {
  int n, dish, firstDish, drink, descount; 

  scanf("%d %d %d %d", &n, &drink, &descount, &firstDish); 

  for(int i = 0; i < n - 1 ; i++){
    scanf("%d", &dish); 
    if(dish < firstDish) 
      firstDish = dish; 
  }

  descount = descount + firstDish;
  
  if(descount < drink)
    printf("%d\n", descount); 
  else
    printf("%d\n", drink); 
  
  return 0;
}