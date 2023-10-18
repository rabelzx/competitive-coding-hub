#include <stdio.h>

int main(void) {
  int n, m; 
  scanf("%d %d", &n, &m); 

  int pacotes[n]; 

  for(int i = 0; i < n; i++){
    scanf("%d", &pacotes[i]); 
  }

  int maxDoces = 0, minResto = m, index = pacotes[0]; 

  for(int i =0; i < n; i++){
    int docesCrianca = pacotes[i] / m; 
    int resto = pacotes[i] % m; 

     if(resto < minResto || (resto == minResto && docesCrianca > maxDoces)){
       maxDoces = docesCrianca; 
       minResto = resto; 
       index = pacotes[i]; 
     }
  }

  printf("%d\n", index); 
 

  return 0;
}