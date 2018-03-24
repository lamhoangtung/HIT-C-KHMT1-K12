#include <stdio.h>

int main(void){
  int n,sum=0;
  scanf("%i",&n);
  for (int i=1;i<=n;i++){
    if (n%i==0) sum+=i;
  }
  if (sum==2*n){
    printf("%i la so hoan hao\n",n);
  }
  else printf("%i khong phai so hoan hao\n",n);
}
