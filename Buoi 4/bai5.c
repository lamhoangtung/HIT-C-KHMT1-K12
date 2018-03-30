#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void){
  int n,x;
  float ans;
  printf("Nhap vao so nguyen n: ");scanf("%i",&n);
  printf("Nhap vao so nguyen x: ");scanf("%i",&x);
  if (x<0){
    for (int i=1;i<=n;i++){
      ans+=(float)(2*i)/(3*(i-1)+2*sqrt(abs(x)+2));
    }
  }
  else {
    for (int i=1;i<=n;i++){
      ans+=(float)(3*i+x)/(x*x+5*(i-2));
    }
  }
  printf("Gia tri bieu thuc la: %f",ans);
}
