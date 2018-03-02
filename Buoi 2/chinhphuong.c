#include <stdio.h>
#include <math.h>

int main(void){
  int n;
  scanf("%i",&n);
  int i=sqrt(n);
  if (n==i*i){
    printf("So %i la so chinh phuong.\n",n);
  } else {
    printf("So %i khong phai la so chinh phuong.\n",n);
  }
}
