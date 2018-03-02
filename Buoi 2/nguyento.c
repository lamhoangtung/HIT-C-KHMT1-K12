#include <stdio.h>
#include <math.h>

int main(void){
  int n,ans=1;
  scanf("%i",&n);
  if (n<=1) ans=0; else{
    for (int i=2;i<=sqrt((float)n);i++){
      if (n%i==0){
        ans=0;
        break;
      }
    }
  }
  if (ans==1){
    printf("%i la so nguyen to.\n",n);
  }
  else printf("%i khong phai la so nguyen to.\n",n);
}
