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

void chuyendoi(int phut){
  int gio=phut/60;
  int phutt=phut%60;
  printf("%i phut bang %i gio %i phut.\n",phut,gio,phutt);
}

int main(){
  int phut=doc();
  chuyendoi(phut);
  return 0;
}
