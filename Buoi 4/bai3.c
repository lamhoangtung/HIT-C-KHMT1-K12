#include <stdio.h>
#include <math.h>

int nguyento(int n){
  if (n<2) return 0;
  for (int i=2;i<=sqrt(n);i++){
    if (n%i==0) return 0;
  }
  return 1;
}

int main(){
  int n;
  printf("Nhap vao so nguyen duong n: ");scanf("%i",&n);
  if (n<5){
    printf ("n phai >= 5\n");
  }
  else {
    int m=n-1,d=0;
    while (1){
      if (nguyento(m)==1){
        d++;
        if (d==2){
          printf("So nguyen to lon thu 2 trong khoang tu 1 den %i la %i.",n,m);
          return 0;
        }
      }
      m--;
    }
  }
}
