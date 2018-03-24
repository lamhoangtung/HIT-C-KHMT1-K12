#include <stdio.h>
#include <math.h>

int main(void){
  int n,kt=1;
  scanf("%i",&n);
  if (n<=1) kt=0;
  for (int i=2;i<=sqrt(n);i++){
    if (n%i==0){
      kt=0;
      break;
    }
  }
  if (kt==0) printf("%i khong phai la so nguyen to\n",n);
  else printf("%i la so nguyen to\n",n);
}
