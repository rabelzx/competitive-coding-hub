#include <stdio.h>
#include <math.h> 

int main(void) {
  double a, b; 
  scanf("%lf %lf", &a, &b); 

  printf("%.lf\n", pow(a, b) + pow(b, a)); 
  
  return 0;
}