#include <stdio.h>

int main(void){
  int ga=1,cho=35,chan=0;
  while (chan!=100){
    ga++;
    cho--;
    chan=ga*2+cho*4;
  }
  printf("Co %i con ga va %i con cho",ga,cho);
}
