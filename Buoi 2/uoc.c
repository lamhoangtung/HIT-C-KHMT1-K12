#include <stdio.h>

int main(void){
  int n;
  scanf("%i",&n);
  for (int i=1;i<=n;i++){
    if (n%i==0) printf("%i ",i);
  }
}
