#include <stdio.h>

int igual(char a, char b) {
  if (a == b) {
    return 1;
  } else if ((a == '1' && b == 'l') || (a == 'l' && b == '1')) {
    return 1;
  } else if ((a == '0' && b == 'o') || (a == 'o' && b == '0')) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  int n;
  scanf("%d", &n);
  
  char s[n], t[n];
  scanf("%s", s);
  scanf("%s", t);
  
  int similar = 1;
  for (int i = 0; i < n; i++) {
    if (!igual(s[i], t[i])) {
      similar = 0;
      break;
    }
  }
  
  if (similar) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  
  return 0;
}
