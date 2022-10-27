#include<stdio.h>
#include<conio.h>
main(){
    printf("\n");
    float m, n, p, s;
    printf(" - Nhap chieu rong cua hcn : ");
    scanf("%f",&m);
    printf(" - Nhap chieu dai cua hcn : ");
    scanf("%f",&n);
    if((m>0)&&(n>0)){
        s = m * n;
        p = (m + n ) * 2;
        printf(" => Chu vi la: %.2f",p);
        printf("\n => Dien tich la: %.2f",s);
    }
    else{
        printf(" => Hinh chu nhat khong hop le");    
    }
    printf("\n >>>>> nldc.vn <<<<<\n");
}
