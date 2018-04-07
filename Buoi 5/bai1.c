#include <stdio.h>

int main(void){
  int n;
  scanf("%i",&n);
  for (int i=2;i<n;i+=2) printf("%i ",i);
  for (int i=1;i<n;i+=2) printf("%i ",i);
}
