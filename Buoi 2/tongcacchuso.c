#include <stdio.h>

int main(void){
  int n,sum=0;
  scanf("%i",&n);
  int x=n;
  while (x!=0){
    sum+=x%10;
    x=x/10;
  }
  printf("So %i co tong cac chu so la: %i.\n",n,sum);
}
