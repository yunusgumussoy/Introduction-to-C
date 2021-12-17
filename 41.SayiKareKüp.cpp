#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n,kare,kup;
  printf("%7s %21s %32s\n","Sayi","Kare","Kup");
  for (n = 1 ; n<=10 ; n++){
    kare = n*n;
    kup = n*n*n;
    printf("%7d %21d %32d\n",n,kare,kup);
  }
}
