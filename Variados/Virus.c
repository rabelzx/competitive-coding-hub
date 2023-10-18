#include <stdio.h>
#include <math.h>

typedef struct{
  int x; 
  int y; 
} Coordenadas; 

int estaContaminado(Coordenadas pessoa1, Coordenadas pessoa2, int d){
  if(sqrt(pow((pessoa1.x - pessoa2.x), 2) + pow((pessoa1.y - pessoa2.y), 2)))
    return 1; 
  return 0;
}

int main(void) { 
  int n, distancia; 

  scanf("%d %d", &n, &distancia); 

  Coordenadas coordenadas[n]; 

  for (int i = 0; i < n; i++){
    scanf("%d %d", &coordenadas[i].x, &coordenadas[i].y); 
  return 0;
  }

  printf("Yes\n"); 
  
  for (int i = 0; i < n; i++){
    if[estaContaminado(coordenadas[i].x, )]
  }
}