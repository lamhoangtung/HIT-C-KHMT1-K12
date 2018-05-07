#include <stdio.h>
#include <math.h>

int nguyento(int n){
  if (n<2) return 0;
  for (int i=2;i<=sqrt(n);i++){
    if (n%i==0) return 0;
  }
  return 1;
}

int main(void){
  int a[20],n;
  printf("Nhap so phan tu cua mang: ");
  scanf("%i",&n);
  while (n<1||n>20){
    printf("Mang khong duoc co nhieu hon 20 phan tu, vui long nhap lai: ");
    scanf("%i",&n);
  }
  for (int i=0;i<n;i++){
    printf("Nhap phan tu thu %i cua mang: ",i+1);
    scanf("%i",&a[i]);
  }
  printf("\nCac so nguyen to co trong mang la:\n");
  for (int i=0;i<n;i++){
    if (nguyento(a[i])==1){
      printf("%i  ",a[i]);
    }
  }
  printf("\n");
}
