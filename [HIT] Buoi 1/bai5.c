#include <stdio.h>

int main(void){
    printf("Hinh vuong\n\n");
    for (int i=0;i<5;i++){
        printf("*****\n");
    }
    printf("\nHinh chu nhat\n\n");
    for (int i=0;i<4;i++){
        printf("******\n");
    }
    printf("\nHinh tam giac\n\n");
    for (int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
