#include <stdio.h>
#include <math.h>

int main(void){
  int n;
  scanf("%i",&n);
  float ans;
  if (n%2==0) ans=log2(n)/3*sin(n-1);
  else ans=(1+3*n)/2*pow(M_E,n);
  printf("%f",ans);
}
