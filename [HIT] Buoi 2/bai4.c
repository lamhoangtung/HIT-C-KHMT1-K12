#include <stdio.h>

int main(void){
  int n;
  scanf("%i",&n);
  int ans=100000;
  if (n<=50){
    ans+=n*50000;
  }
  else if (n<=100){
    ans+=50*50000+(n-50)*80000;
  }
  else{
    ans+=50*(50000+80000)+(n-100)*100000;
  }
  printf("%i\n",ans);
}
