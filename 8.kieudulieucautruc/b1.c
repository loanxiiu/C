// Phân số:
// -Khai báo kiểu dữ liệu phân số(PHANSO)
// -Nhập xuất phân số 
// -Rút gọn phân số
// -Tính tổng hiệu tích thương hai phân số
// -Kiểm tra phân số tối giản
// -Quy đồng hai phân số
// -So sánh hai phân số

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct PHANSO{
    int TuSo;
    int MauSo;
};
int xuat(struct PHANSO p);

void nhap(struct PHANSO *p){
    printf("nhap tu so:");
    scanf("%d",&p->TuSo);
    do
    {
        printf("nhap mau so:");
        scanf("%d",&p->MauSo);
        if(p->MauSo==0)
        printf("nhap lai mau so:");
    } while (p->MauSo==0);
        if(p->MauSo<0){
        p->TuSo*=-1;
        p->MauSo*=-1;}
}

int xuat(struct PHANSO p){
    printf("phan so do la: %d/%d",p.TuSo, p.MauSo);
}

int rutgon(struct PHANSO p){
    int min=0;
    if(abs(p.TuSo)>=abs(p.MauSo)){
        min=min+abs(p.MauSo);
    }else
    min=min+abs(p.TuSo);
    for( int i=min; i>=1; i--){
        if(p.TuSo%i==0 && p.MauSo%i==0){
            p.TuSo/=i;
            p.MauSo/=i;
            break;
        }
    }
    printf("\nphan so sau khi rut gon la: %d/%d",p.TuSo,p.MauSo);
}

int UCLN(int a, int b){
    int ucln=0;
    int min=0;
    if(abs(a)>=abs(b)){
        min=min+abs(b);
    }else
    min=min+abs(a);
    for(int i=min; i>=1; i--){
        if(a%i==0 && b%i==0){
            ucln+=i;
            break;
        }
    }
}

int BCNN(int a, int b){
    int bcnn=0;
    for(int i=1; i<=a*b; i++){
        if(i%a==0 && i%b==0){
            bcnn+=i;
            break;
        }
    }
}

int TongHieuTichThuong(struct PHANSO p1, struct PHANSO p2){
    struct PHANSO p;
    int tuso1= p1.TuSo, tuso2=p2.TuSo;
    int tong, hieu, tich, thuong;
    if(p1.MauSo!=p2.MauSo){
        p.MauSo=BCNN(p1.MauSo,p2.MauSo);
        tuso1=(BCNN(p1.MauSo, p2.MauSo)/p1.MauSo)*p1.TuSo;
        tuso2=(BCNN(p1.MauSo, p2.MauSo)/p2.MauSo)*p2.TuSo;
    }
    printf("\n%d/%d + %d/%d = %d/%d", p1.TuSo, p1.MauSo, p2.TuSo, p2.MauSo, tuso1+tuso2, p.MauSo);
    printf("\n%d/%d - %d/%d = %d/%d", p1.TuSo, p1.MauSo, p2.TuSo, p2.MauSo, tuso1-tuso2, p.MauSo);
    printf("\n%d/%d * %d/%d = %d/%d", p1.TuSo, p1.MauSo, p2.TuSo, p2.MauSo, tuso1*tuso2, p1.MauSo*p2.MauSo);
    printf("\n%d/%d : %d/%d = %d/%d", p1.TuSo, p1.MauSo, p2.TuSo, p2.MauSo, tuso1*p2.MauSo, p1.MauSo*p2.TuSo);
}

int PhanSoToiGian(struct PHANSO p){
    if(UCLN(p.TuSo, p.MauSo)!=1){
        printf("\nphan so toi gian cua %d/%d la %d/%d",p.TuSo, p.MauSo, p.TuSo/UCLN(p.TuSo,p.MauSo), p.MauSo/UCLN(p.TuSo,p.MauSo));
    }
    else 
    printf("\nphan so %d/%d da toi gian",p.TuSo,p.MauSo);
}

int SoSanhPhanSo(struct PHANSO p1, struct PHANSO p2){
    int tuso1= p1.TuSo, tuso2=p2.TuSo;
    if(p1.MauSo!=p2.MauSo){
        tuso1=(BCNN(p1.MauSo, p2.MauSo)/p1.MauSo)*p1.TuSo;
        tuso2=(BCNN(p1.MauSo, p2.MauSo)/p2.MauSo)*p2.TuSo;
        if(tuso1>tuso2){
            printf("\n%d/%d > %d/%d", p1.TuSo, p1.MauSo, p2.TuSo, p2.MauSo);
        }
        if(tuso1<tuso2){
            printf("\n%d/%d < %d/%d", p1.TuSo, p1.MauSo, p2.TuSo, p2.MauSo);
        }
        if(tuso1==tuso2){
            printf("\n%d/%d = %d/%d", p1.TuSo, p1.MauSo, p2.TuSo, p2.MauSo);
        }
    }
        else{
        if(p1.TuSo>p2.TuSo){
            printf("\n%d/%d > %d/%d", p1.TuSo, p1.MauSo, p2.TuSo, p2.MauSo);
        }
        if(p1.TuSo<p2.TuSo){
            printf("\n%d/%d < %d/%d", p1.TuSo, p1.MauSo, p2.TuSo, p2.MauSo);
        }
        else printf("\n%d/%d = %d/%d", p1.TuSo, p1.MauSo, p2.TuSo, p2.MauSo);
    }
}

int main(){
    struct PHANSO p1, p2;
    nhap(&p1);
    xuat(p1);
    rutgon(p1);
    printf("\n");
    nhap(&p2);
    xuat(p2);
    rutgon(p2);    
    TongHieuTichThuong(p1,p2);
    PhanSoToiGian(p1);
    PhanSoToiGian(p2);
    SoSanhPhanSo(p1,p2);
}