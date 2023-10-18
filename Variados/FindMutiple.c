#include <stdio.h>

int main(void) {

  int a, b, c, flag = 0;; 
  scanf("%d %d %d", &a, &b, &c);

  for(int i = a; i <= b; i++){
    if( i % c == 0){
      printf("%d", i);
      flag = 1;
      break;
    } 
  }

  if(flag == 0){
    printf("-1");
  }

  return 0;
}