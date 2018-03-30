#include <stdio.h>

int main(){
  int x,y;
  scanf("%i%i",&x,&y);
  if (((x>=1&&x<=4)||(x>=6&&x<=8)) && (y==1||y==3)){
    printf("Trong duoc\n");
    return 0;
  }
  printf("Khong trong duoc\n");
  return 0;
}
