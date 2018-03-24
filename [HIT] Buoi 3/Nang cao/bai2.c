#include <stdio.h>

int main(void){
  int n;
  scanf("%i",&n);
  if (n%2==0) printf("Can't draw with even number lol\n");
  else {
    int x=n-1,y=1;
    for (int k=1;k<=x;k++) printf(" ");
    printf("*\n");
    x--;
    for (int i=2;i<=n-1;i++){
      for (int k=1;k<=x;k++) printf(" ");
      printf("*");
      for (int k=1;k<=y;k++) printf(" ");
      printf("*\n");
      x--;
      y+=2;
    }
    for (int i=1;i<=2*n-1;i++) printf("*");
    printf("\n");
  }
}
