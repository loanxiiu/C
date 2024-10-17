// Quản lý học sinh: Khai báo kiểu dữ liệu học sinh (HOCSINH)
// Nhập n học sinh với các thuộc tính: Họ tên, năm sinh, điểm toán, lý, tổng điểm 
// (tổng điểm = toán + lý + hóa, tổng điểm được tính sau khi nhập các điểm toán lý hóa)
// Sắp xếp danh sách theo thứ tự giảm của tổng điểm, in kết quả ra màn hình.
// Tìm kiếm theo họ tên của học sinh, đưa kết quả ra màn hình. In ra màn hình các thí sinh có tổng điểm lớn hơn 15

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct HOCSINH{
    char hoten[50];
    int ngaysinh;
    int thangsinh;
    int namsinh;
    int diemtoan;
    int diemly; 
    int diemhoa;
}hocsinh;

bool kiTuDau(char c){
    return c==' ' || c=='\t';
}

char chuanHoa(char a[]){
    int size= strlen(a);
    for(int i=0; i<size; i++){
        if(a[i]==a[0]){
            if ((a[i]>='a'&& a[i]<='z')){
                a[i]-=32;
            }
        }
        if(kiTuDau(a[i])){
            if ((a[i+1]>='a'&& a[i+1]<='z')){
                a[i+1]-=32;
            }
        }
        if(!kiTuDau(a[i])&&!kiTuDau(a[i+1])){
            if ((a[i+1]>='A'&& a[i+1]<='Z')){
                a[i+1]+=32;
            } 
        }
    }
}

void nhap(struct HOCSINH *a){
    fflush(stdin);
    printf("Nhap ho ten:");
    gets(a->hoten);
    printf("Nhap ngay/thang/nam sinh:");
    scanf("%d %d %d", &a->ngaysinh, &a->thangsinh, &a->namsinh);
    printf("Nhap diem toan:");
    scanf("%d",&a->diemtoan);
    printf("Nhap diem ly:");
    scanf("%d", &a->diemly);
    printf("Nhap diem hoa:");
    scanf("%d",&a->diemhoa);
}

void xuat(struct HOCSINH *a){
    printf("\nHo ten:");
    chuanHoa(a->hoten);
    puts(a->hoten);
    printf("Ngay sinh: %d/%d/%d", a->ngaysinh, a->thangsinh, a->namsinh);
    printf("\nDiem toan: %d", a->diemtoan);
    printf("\nDiem ly: %d", a->diemly);
    printf("\nDiem hoa: %d",a->diemhoa);
}

void nhapmang(struct HOCSINH a[], int n){
    for(int i=0; i<n; i++){
        nhap(&a[i]);
        printf("\n");
    }
}

void xuatmang(struct HOCSINH a[], int n){
    for(int i=0; i<n; i++){
        xuat(&a[i]);
        printf("\n");
    }
}

int tongDiem(struct HOCSINH a){
    int tong=a.diemtoan+a.diemly+a.diemhoa;
    return tong;
}

hocsinh hoanvi(struct HOCSINH *a, struct HOCSINH *b) 
{
    hocsinh temp = *a;
    *a = *b;
    *b = temp;
    return temp;
}

int sapXepTheoThuTuGiamCuaTongDiem(struct HOCSINH a[], int n){
    int i,j;
    int tg=tongDiem(a[0]);
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(tongDiem(a[i]) < tongDiem(a[j])){
                hoanvi(&a[i],&a[j]);
            } 
        }
    }
    printf("\nDanh sach theo diem:");      
    for(int i = 0; i < n; i++){
        printf("\n"); 
        xuat(&a[i]);
    } 
}

void timKiemTheoHoVaTen(struct HOCSINH a[], int n){
    char xau[50];
    printf("\n\nTim kiem theo ten!\nNhap ten:");
    fflush(stdin);
    gets(xau);
    chuanHoa(xau);
    for(int i=0; i<n; i++){
        if(strcmp(xau,a[i].hoten)==0){
            xuat(&a[i]);  
        }
    }
}

int main(){
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    struct HOCSINH a[n];
    nhapmang(a,n);
    xuatmang(a,n);
    sapXepTheoThuTuGiamCuaTongDiem(a,n);
    timKiemTheoHoVaTen(a,n);
}
