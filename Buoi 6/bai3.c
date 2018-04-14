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

float bieuthuc(int n,int x){
  float ans=0;
  int i=0;
  while (x*n-i>=1){
    ans+=1.0/(float)(x*n-i);
    i++;
  }
  return ans;
}

void inra(float n,int i){
  printf("Gia tri cua bieu thuc %i la %f.\n",i,n);
}

int main(){
  int n=doc();
  float ans=bieuthuc(n,1);
  inra(ans,1);
  ans=bieuthuc(n,2);
  inra(ans,2);
  ans=bieuthuc(n,3);
  inra(ans,3);
  return 0;
}
