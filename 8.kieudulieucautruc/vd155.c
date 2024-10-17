#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct {
    unsigned char Ngay;
    unsigned char Thang;
    unsigned int Nam;
} NgayThang;

typedef struct{
    char MSSV[10];
    char HoTen[40];
    NgayThang NgaySinh;
    int GioiTinh;
    char DiaChi[40];
}SinhVien;

void InSV(SinhVien s){
printf("MSSV:| Ho va ten:| Ngay sinh:| Dia chi:\n");
printf("%s|%s|%d-%d-%d|%s\n",s.MSSV,s.HoTen,s.NgaySinh.Ngay,s.NgaySinh.Thang,s.NgaySinh.Nam,s.DiaChi);

}
int main(){
    SinhVien SV,s;
    printf("Nhap MSSV:");
    gets(SV.MSSV);
    printf("Nhap ho ten:");
    gets(SV.HoTen);
    printf("sinh ngay:");
    scanf("%d",&SV.NgaySinh.Ngay);
    printf("Thang:");
    scanf("%d",&SV.NgaySinh.Thang);
    printf("Nam:");
    scanf("%d",&SV.NgaySinh.Nam);
    printf("Gioi tinh (0:nu),(1:nam):");
    scanf("%d",&SV.GioiTinh);
    fflush(stdin);
    printf("Dia chi:");
    gets(SV.DiaChi);
    InSV(SV);
    s=SV;
    InSV(s);
    getch();
}