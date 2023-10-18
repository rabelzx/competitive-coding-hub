#include <stdio.h>
#include <math.h>

int main() {
  
    int x, minPerfeito = 1;;
    scanf("%d", &x);
  
    for (int b = 2; pow(b, 2) <= x; b++) {
        int p = 2;
        while (pow(b, p) <= x) {
          if(pow(b,p) > minPerfeito)
            minPerfeito = (int)pow(b, p);   
          p++;
        }
    }
  
    printf("%d\n", minPerfeito);
    return 0;
}