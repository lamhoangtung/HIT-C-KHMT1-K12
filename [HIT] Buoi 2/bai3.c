#include <stdio.h>
#include <math.h>

int main(void){
  int a,b;
  float x,ans;
  scanf("%i%i%f",&a,&b,&x);
  if (a+b!=0){
    ans=(float)(2.0*a*x+3.0*b)/(a+b);
  }
  else {
    ans=sqrt(a*a+b*b+99)+sin(x);
  }
  printf("F(x)=%f\n",ans);
}
