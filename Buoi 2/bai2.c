#include <stdio.h>

int main(void){
  float n,ans=0.0;
  scanf("%f",&n);
  if (n<=100){
    ans+=n*0.05;
  }
  else if (n<=300){
    ans+=n*0.1;
  }
  else if (n>300){
    ans+=n*0.2;
  }
  printf("%f\n",ans);
}
