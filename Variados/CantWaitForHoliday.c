#include <stdio.h>
#include <string.h> 

int main(void) {
  char day[4]; 
  scanf("%s", day); 

  if(strcmp(day, "MON") == 0)
    printf("6\n"); 
  else if(strcmp(day, "TUE") == 0)
    printf("5\n"); 
  else if(strcmp(day, "WED") == 0)
    printf("4\n"); 
  else if(strcmp(day, "THU") == 0)
    printf("3\n"); 
  else if(strcmp(day, "FRI") == 0)
    printf("2\n"); 
  else if(strcmp(day, "SAT") == 0)
    printf("1\n"); 
  else
    printf("7\n"); 
  
  return 0;
}