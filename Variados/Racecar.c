#include <stdio.h>
#include <string.h> 

int isPalindromo(char concatenacao[], int length){
  int i, j = length - 1; 
  for(i = 0; i < j; i++){
    if(concatenacao[i] != concatenacao[j]){
      return 0;
    }
    j -= 1; 
  }
  return 1; 
}

int checarPalindromos(char strings[][51], int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i != j){
        char concatenacao[102];
        strcpy(concatenacao, strings[i]); 
        strcat(concatenacao, strings[j]); 
        int length = strlen(concatenacao); 
        if(isPalindromo(concatenacao, length)) {
          return 1; 
        }
      }
    }
  }
  return 0; 
}

int main() {
  int n; 
  scanf("%d", &n); 

  char strings[n][51]; 

  for(int i = 0; i < n; i++){
    scanf("%s ", strings[i]); 
  }

  int result = checarPalindromos(strings, n); 

  if(result){
    printf("Yes\n"); 
  }
  else{
    printf("No\n");
  }
  
  return 0;
}