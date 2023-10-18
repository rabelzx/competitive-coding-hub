#include <stdio.h>
#include <string.h> 

int main(void) {
  int n, z; 
  char word[8], atual; 
  

  scanf("%d", &n); 
  
  for(int i = 0; i < n; i++){   
    z = 0; 
    
    for(int j = 0; j < 8; j++){
      for(int k = 0; k <= 8; k++){
        scanf("%c", &atual); 
        if(atual != '.' && atual != '\n'){
          word[z] = atual; 
          z++; 
        }
        
      }
    }

  printf("%s\n", word);
  memset(word, 0, sizeof(word));
    
  }
  return 0;
}