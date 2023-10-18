#include <stdio.h>

int main(void) {

  int N, yes = 0, no = 0;
  scanf("%d", &N);

  char s[N];
  scanf("%s", s);
  
  for(int i = 0; i <= N-1; i++){
    if(s[i] == 'x'){
      no++;
      break;
    } else if(s[i] == 'o'){
      yes++;
    } 
  }

  if(no > 0){
    printf("No");
  }else if (yes > 0){
    printf("Yes");
  } else{
    printf("No");
  }
    
    
  return 0;
}