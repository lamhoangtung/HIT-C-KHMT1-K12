#include <stdio.h>

int main(void){
  for (int i=1;i<=10;i++){
    for (int j=2;j<=9;j++){
      printf("%i * %i = %i  ",j,i,j*i);
    }
    printf("\n");
  }
}
