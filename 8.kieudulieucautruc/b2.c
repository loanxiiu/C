// Mảng phân số:
// - Nhập/ x<uất n phân số
// - Rút gọn mọi phân số 
// - Đếm số lượng phân số âm/ dương trong mảng
// - Tìm phân số nhỏ nhất/ lớn nhất trong mảng
// - Sắp xếp mảng tăng dần/ giảm dần

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int n; 

struct PHANSO{
    int TuSo;
    int MauSo;
};

void xuat( struct PHANSO p[n]){
    for( int i=0; i<n; i++){
        printf("%d/%d\t",p[i].TuSo, p[i].MauSo);
    }
}

void nhap(struct PHANSO p[n]){
    for (int i=0; i<n; i++){
        printf("\nnhap phan tu thu %d: ",i);
        printf("\nnhap tu so:");
        scanf("%d",&p[i].TuSo);
    do
    {
        printf("nhap mau so:");
        scanf("%d",&p[i].MauSo);
        if(p[i].MauSo==0)
        printf("nhap lai mau so!\n");
    } while (p[i].MauSo==0);
        if(p[i].MauSo<0){
        p[i].TuSo*=-1;
        p[i].MauSo*=-1;}
    }
    printf("\n");
}

int RutGonPhanSo(struct PHANSO p[n]){
    for(int j=0; j<n; j++){
    int min=0, tumoi, maumoi;
        if(abs(p[j].TuSo)>=abs(p[j].MauSo)){
            min=min+abs(p[j].MauSo);
        }else
        min=min+abs(p[j].TuSo);
        for( int i=min; i>=1; i--){
            if(p[j].TuSo%i==0 && p[j].MauSo%i==0){
                tumoi=p[j].TuSo/i;
                maumoi=p[j].MauSo/i;
                break;
            }
        }
        printf("\nphan so %d/%d sau khi rut gon la: %d/%d",p[j].TuSo,p[j].MauSo, tumoi, maumoi);
    }
}

int SoPhanTuAmDuong(struct PHANSO p[n]){
    int count1=0, count2=0;
    printf("\n\nphan tu duong :");
    for(int i=0; i<n; i++){
        if(p[i].TuSo==abs(p[i].TuSo)){
            printf("%d/%d\t",p[i].TuSo,p[i].MauSo);
            count1++;
        }
    }
    printf("\nso phan tu duong la %d",count1);
    printf("\nphan tu am :");
    for(int i=0; i<n; i++){
        if(p[i].TuSo!=abs(p[i].TuSo)){
            printf("%d/%d\t",p[i].TuSo,p[i].MauSo);
            count2++;
        }
    }
    printf("\nso phan tu am la %d",count2);
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

int SoSanhPhanSo(struct PHANSO p1, struct PHANSO p2){
    int tuso1= p1.TuSo, tuso2=p2.TuSo;
    if(p1.MauSo!=p2.MauSo){
        tuso1=(BCNN(p1.MauSo, p2.MauSo)/p1.MauSo)*p1.TuSo;
        tuso2=(BCNN(p1.MauSo, p2.MauSo)/p2.MauSo)*p2.TuSo;
        if(tuso1<tuso2){
           return 1; 
        }
        if(tuso1>tuso2){
            return -1;
        }
    }
        else{
        if(p1.TuSo<p2.TuSo){
            return 1;
        }
        if(p1.TuSo>p2.TuSo){
            return -1;
        }
    }
}

int PhanSoLonNhatNhoNhat(struct PHANSO p[n]){
    struct PHANSO max=p[0], min=p[0];
    for(int i=1; i<n; i++){
        if(SoSanhPhanSo(max,p[i])==1){
            max=p[i];  
        }
    }
    printf("\nphan tu lon nhat trong mang la %d/%d",max);

    for(int j=1; j<n; j++){
        if(SoSanhPhanSo(min,p[j])==-1){
            min=p[j];  
        }
    }
    printf("\nphan tu nho nhat trong mang la %d/%d",min);
}

int sapxep(struct PHANSO p[n]){
    struct PHANSO tg=p[0], tp=p[0];
    int i,j;
    printf("\nmang giam dan la:\n");
    for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(SoSanhPhanSo(p[i], p[j])==1){
                    tg = p[i];
                    p[i] = p[j];
                    p[j] = tg; } }}      
    for(int i = 0; i < n; i++){
        printf("%d/%d\t", p[i]);
    } 
    printf("\n%d/%d",tp);
    printf("\n%d/%d",tg);
        printf("\nmang tang dan la:\n");
    for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(SoSanhPhanSo(p[i], p[j])==-1){
                    tg = p[i];
                    p[i] = p[j];
                    p[j] = tg; } }}      
    for(int i = 0; i < n; i++){
        printf("%d/%d\t", p[i]);
    } 
}



int main(){
    struct PHANSO p[n];
    printf("nhap n:");
    scanf("%d",&n);
    nhap(&p[n]);
    xuat(&p[n]);
    RutGonPhanSo(&p[n]);
    SoPhanTuAmDuong(&p[n]);
    PhanSoLonNhatNhoNhat(&p[n]);
    sapxep(&p[n]);
}