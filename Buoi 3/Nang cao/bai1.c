#include <stdio.h>

int main(void){
  int n;
  scanf("%i",&n);
  if (n%2==0) printf("Can't draw with even number lol\n");
  else {
    int i,j=1;
    for (i=n/2;i>0;i--){
      for (int k=1;k<=i;k++) printf(" ");
      for (int k=1;k<=j;k++) printf("*");
      printf("\n");
      j+=2;
    }
    for (int k=1;k<=n;k++) printf("*");
    printf("\n");
    j=n-2;
    for (i=1;i<=n/2;i++){
      for (int k=1;k<=i;k++) printf(" ");
      for (int k=1;k<=j;k++) printf("*");
      printf("\n");
      j-=2;
    }
  }
}
