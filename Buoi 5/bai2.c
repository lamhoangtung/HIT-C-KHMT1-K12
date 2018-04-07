#include <stdio.h>

int main(void){
  int n,ans=0;
  scanf("%i",&n);
  while (n!=0){
    ans+=n%10;
    n=n/10;
  }
  printf("%i",ans);
}
