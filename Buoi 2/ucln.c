#include <stdio.h>

int main(void){
  int x,y;
  scanf("%i",&x);
  scanf("%i",&y);
  int a=x,b=y;
  while (x!=y){
    if (x>y) x-=y; else y-=x;
  }
  printf("Uoc chung lon nhat cua 2 so %i va %i la %i.\n",a,b,x);
}
