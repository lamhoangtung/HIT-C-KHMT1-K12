#include <stdio.h>

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
  int min=a[0],dem=0;
  for (int i=1;i<n;i++){
    if (a[i]<min) min=a[i];
  }
  for (int i=0;i<n;i++){
    if (a[i]==min) dem++;
  }
  printf("Phan tu nho nhat trong mang la %i va xuat hien %i lan.\n",min,dem);
}
