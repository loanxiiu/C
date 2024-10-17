// TAM GIÁC
// khai báo kiểu dữ liệu tam giác
// Nhập xuất tam giác
// Tính chu vi diện tích tam giác

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct TAMGIAC{
    int AB;
    int BC;
    int CA;
}tamgiac;

void nhapTamGiac(struct TAMGIAC *a){
    do
    {
        printf("Nhap canh AB:");
        scanf("%d",&a->AB);
        printf("Nhap canh BC:");
        scanf("%d",&a->BC);
        printf("Nhap canh CA:");
        scanf("%d",&a->CA);
        if(a->AB+a->BC <= a->CA){
            printf("nhap lai canh!");
            printf("\nNhap canh AB:");
            scanf("%d",&a->AB);
            printf("Nhap canh BC:");
            scanf("%d",&a->BC);
            printf("Nhap canh CA:");
            scanf("%d",&a->CA);
        }
    } while (a->AB+a->BC <= a->CA); 
}

void xuat(struct TAMGIAC a){
    printf("Tam giac ABC:");
    printf("\nAB=%d",a.AB);
    printf("\nBC=%d",a.BC);
    printf("\nCA=%d",a.CA);
}

int chuVi(struct TAMGIAC a){
    return a.AB+a.BC+a.CA;
}

float dienTich(struct TAMGIAC a){
    int P = chuVi(a);
    float p = P/2.0;
    float S = sqrt(p * (p-a.AB) * (p-a.BC) *(p-a.CA));
    return S;
}

int main(){
    struct TAMGIAC a;
    nhapTamGiac(&a);
    xuat(a);
    printf("\nChu vi tam giac ABC=%d",chuVi(a));
    printf("\nDien tich tam giac ABC=%f",dienTich(a));
}