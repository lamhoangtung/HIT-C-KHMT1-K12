#include <stdio.h>

int main(void){
  int a[11],n=10,sum=0;
  a[0]=2;
  for (int i=1;i<n;i++){
    a[i]=i*3*a[0]-1;
    sum+=a[i];
  }
  printf("Mang sau khi khoi tao la:\n");
  for (int i=0;i<n;i++){
    printf("%i ",a[i]);
  }
  for (int j=n-1;j>=2;j--){
    for (int i=0;i<=j-1;i++){
      if (a[i]<a[i+1]){
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
      }
    }
  }
  printf("\nMang sau khi sap xep giam dan la:\n");
  for (int i=0;i<n;i++){
    printf("%i ",a[i]);
  }
  printf("\nTong cac phan tu trong mang la %i.\n",sum);
}
