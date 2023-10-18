#include <stdio.h>

/*int waysToCut(int n) {
  int ways = 0, i, j;
  
  if(n % 2 != 0)
    return ways; 
  for (int i = 1; i <= n; i++) {
    int j = (n - 2*i) / 2;
    if (2*i + 2*j == n && j > i) {
      printf("%d %d %d %d\n", i, i, j, j);
      ways++;
    }
  }
  
  return ways;
}
*/

int alternative(int n) {
  int ways = 0, i, j;
  
  if(n % 2 != 0) 
    return ways; 
  
  ways = (n / 2) - 1 - (n / 4); 
  return ways; 
}

int main(void) {
  int lenght, ways; 
  scanf("%d", &lenght); 

  ways = alternative(lenght); 
  printf("%d\n\n", ways); 

  return 0;
}
