#include <stdio.h>

int main(void){
    float x,y;
    printf("Nhap x: ");scanf("%f",&x);
    printf("Nhap y: ");scanf("%f",&y);
    float ans1=x*x+2*x*y+y*y;
    float ans2=(6.0*x+(9.0*y)/2.0)-((x/y)+5.0);
    printf(" x^2 + 2xy + y^2 = %f\n",ans1);
    printf(" (6x+(9y/2))-((x/y)+5) = %f\n",ans2);
}
