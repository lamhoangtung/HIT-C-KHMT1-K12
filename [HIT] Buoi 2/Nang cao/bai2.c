#include <stdio.h>

int main(){
  int x1,y1,x2,y2;
  scanf("%i%i%i%i",&x1,&y1,&x2,&y2);
  if (x1+1!=x2){
    if (y1+1!=y2) printf("(%i,%i) ",x1+1,y1+1);
    if (y1-1!=y2) printf("(%i,%i) ",x1+1,y1-1);
    if (y1!=y2) printf("(%i,%i) ",x1+1,y1);
  }
  if (x1!=x2){
    if (y1+1!=y2) printf("(%i,%i) ",x1,y1+1);
    if (y1-1!=y2) printf("(%i,%i) ",x1,y1-1);
  }
  if (x1-1!=x2){
    if (y1+1!=y2) printf("(%i,%i) ",x1-1,y1+1);
    if (y1-1!=y2) printf("(%i,%i) ",x1-1,y1-1);
    if (y1!=y2) printf("(%i,%i) ",x1-1,y1);
  }

  if (x1+1==x2){
    if (y1+1==y2) printf("(%i,%i) ",x1+1,y1+1);
    if (y1-1==y2) printf("(%i,%i) ",x1+1,y1-1);
    if (y1==y2) printf("(%i,%i) ",x1+1,y1);
  }
  if (x1==x2){
    if (y1+1!=y2) printf("(%i,%i) ",x1,y1+1);
    if (y1-1!=y2) printf("(%i,%i) ",x1,y1-1);
  }
  if (x1-1==x2){
    if (y1+1!=y2) printf("(%i,%i) ",x1-1,y1+1);
    if (y1-1!=y2) printf("(%i,%i) ",x1-1,y1-1);
    if (y1!=y2) printf("(%i,%i) ",x1-1,y1);
  }

  return 0;
}
