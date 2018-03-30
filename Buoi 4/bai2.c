#include <stdio.h>

int main(void){
  long long ans=5000000;
  int n;
  printf("Nhap so nam gui: ");
  scanf("%i",&n);
  for (int i=1;i<=n;i++){
    ans+=ans*0.063;
  }
  printf("So tien sau %i nam gui ngan hang la %lld",n,ans);
}
