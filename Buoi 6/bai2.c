#include <stdio.h>

int doc(){
  int n;
  printf("Nhap vao so nguyen duong n: ");
  scanf("%i",&n);
  while (n<0){
    printf("Du lieu khong thoa man, nhap vao so nguyen duong n: ");
    scanf("%i",&n);
  }
  return n;
}

int tongchan(int n){
  int ans=0;
  for (int i=2;i<=n;i+=2) ans+=i;
  return ans;
}

void inra(int n){
  printf("Tong cac so chan [1,n] la: %i\n",n);
}

int main(){
  int n=doc();
  int ans=tongchan(n);
  inra(ans);
  return 0;
}
