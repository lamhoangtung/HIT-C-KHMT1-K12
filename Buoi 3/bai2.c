#include <stdio.h>

int main(void){
  int n,kt=1,temp=1,sum=0;
  scanf("%i",&n);
  for (int i=1;i<=n;i++){
    temp*=i;
    sum+=temp;
  }
  printf("%i\n",sum);
}
