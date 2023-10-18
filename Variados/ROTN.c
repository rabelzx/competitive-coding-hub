#include <stdio.h>
#include <string.h>

void incrementarAlfabeticamente(char *string, int incremento){
  for(int i = 0; i < strlen(string); i++) {
    string[i] = ((string[i] - 'A') + incremento) % 26 + 'A'; 
  }
}

int main(void) {
  int incremento; 
  char string[10000]; 
  
  scanf("%d", &incremento); 
  scanf("%s", string); 

  incrementarAlfabeticamente(string, incremento); 

  printf("%s\n", string); 
  
  return 0;
}