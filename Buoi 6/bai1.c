#include <stdio.h>

int doc(int i){
  int temp;
  printf("Nhap vao so nguyen duong %i: ",i);
  scanf("%i",&temp);
  while (temp<0){
    printf("Du lieu khong thoa man, nhap vao so nguyen duong %i: ",i);
    scanf("%i",&temp);
  }
  return temp;
}

int tong(int x, int y){
  return (x+y);
}

void inra(int n){
  printf("Tong cua 2 so la: %i\n",n);
}

int main(){
  int a=doc(1);
  int b=doc(2);
  int ans=tong(a,b);
  inra(ans);
  return 0;
}
