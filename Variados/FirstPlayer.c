#include <stdio.h>

  typedef struct { 
  char nome[10]; 
  int idade; 
  } Pessoa;

int main(void) {
  int n; 
  scanf("%d", &n); 

  Pessoa pessoas[n]; 

  for(int i = 0; i < n; i++){
    scanf("%s %d", pessoas[i].nome, &pessoas[i].idade); 
  }

  int menorIdade = pessoas[0].idade; 
  int index = 0; 

  for (int i = 1; i < n; i++){
    if(pessoas[i].idade < menorIdade){
      menorIdade = pessoas[i].idade; 
      index = i; 
    } 
  }

  for (int i = index; i < n; i++)
    printf("%s\n", pessoas[i].nome); 


  for (int i = 0; i < index; i++)
    printf("%s\n", pessoas[i].nome); 
  
  return 0;
}