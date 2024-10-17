// Điểm trong mặt phẳng Oxy
// Khai báo kiểu dữ liệu điểm(DIEM)
// Nhập xuất tọa độ hai điểm A, B 
// Tìm điểm đối xứng qua gốc tọa độ /trục Ox/Oy

#include<stdio.h>

typedef struct DIEM{
    int Ox;
    int Oy;
    int Oz;
}D;

void nhap(struct DIEM *a){ 
    printf("\nNhap toa do truc Ox:");
    scanf("%d",&a->Ox);
    printf("Nhap toa do truc Oy:");
    scanf("%d",&a->Oy);
    printf("Nhap toa do truc Oz:");
    scanf("%d",&a->Oz);
}

void xuat(struct DIEM a){
    printf("(%d,%d,%d)",a.Ox, a.Oy,a.Oz);
}

int doiXungQuaOx(struct DIEM a){
    a.Oy*=-1;
    a.Oz*=-1;
    printf("(%d,%d,%d)",a.Ox,a.Oy,a.Oz);
}

int doiXungQuaOy(struct DIEM a){
    a.Ox*=-1;
    a.Oz*=-1;
    printf("(%d,%d,%d)",a.Ox,a.Oy,a.Oz);
}

int main(){
    struct DIEM A, B;
    printf("Nhap diem A:");
    nhap(&A);
    printf("Toa do diem A");
    xuat(A);
    printf("\nDiem doi xung voi A(%d,%d,%d) qua truc Ox: ",A.Ox,A.Oy,A.Oz);
    doiXungQuaOx(A);
    printf("\nDiem doi xung voi A(%d,%d,%d) qua truc Oy: ",A.Ox,A.Oy,A.Oz);
    doiXungQuaOy(A);
    printf("\n\nNhap diem B:");
    nhap(&B);
    printf("Toa do diem B");
    xuat(B);
    printf("\nDiem doi xung voi B(%d,%d,%d) qua truc Ox: ",B.Ox,B.Oy,B.Oz);
    doiXungQuaOx(B);
    printf("\nDiem doi xung voi B(%d,%d,%d) qua truc Oy: ",B.Ox,B.Oy,B.Oz);
    doiXungQuaOy(B);
}
