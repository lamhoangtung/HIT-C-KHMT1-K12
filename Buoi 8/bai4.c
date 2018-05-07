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
  int max=a[0];
  for (int i=1;i<n;i++){
    if (a[i]>max) max=a[i];
  }
  printf("Phan tu lon nhat trong mang la %i.\n",max);

  for (int i=0;i<n;i++){
    if (a[i]==max){
      n--;
      for (int j=i;j<n;j++){
        a[j]=a[j+1];
      }
    }
  }
  printf("Mang sau khi xoa cac phan tu lon nhat la:\n");
  for (int i=0;i<n;i++){
    printf("%i ",a[i]);
  }
  printf("\n");
}
