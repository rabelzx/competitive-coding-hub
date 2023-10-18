#include <stdio.h>

int main(void) {
  double media;
  int drinks, porcentagem, volumeTotal = 0; 
  
  scanf("%d", &drinks); 
  
  for(int i = 0; i < drinks; i++){
    scanf("%d", &porcentagem); 
    volumeTotal += porcentagem; 
  }

  if(drinks == 0)
    printf("0\n"); 
  else{
    media = (double) volumeTotal / (double) drinks; 
    printf("%f", media); 
  }
  
  return 0;
}