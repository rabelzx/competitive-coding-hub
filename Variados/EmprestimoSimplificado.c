#include <stdio.h>

int main(void) {

  double t, j; 
  double m;
  scanf("%lf %lf %lf", &m, &j, &t); 
  
  for(int i = 0; i < t; i++){
    m += (m * j) / 100.0; 
  }

  printf("%lf", m); 
  return 0;
}

