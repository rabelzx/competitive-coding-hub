#include <stdio.h>
#include <string.h>

int main(void) {
  char palavra[100]; 
  scanf("%s", palavra); 

  int size = strlen(palavra), hugs = 0; 
    
  for(int i = 0; i < size / 2;i++){
    if(palavra[i] != palavra[size - i - 1])
      hugs++; 
  } 
  
  printf("%d\n", hugs); 
  
  return 0;
}
