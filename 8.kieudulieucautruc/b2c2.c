#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct PHANSO{
    int t;
    int m;
}PS;

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
            return i;
        }
    }
}

void chuanHoa(struct PHANSO *x){
    if(x->m<0){
        x->t=-x->t;
        x->m=-x->m;
    }
}

void nhapPS(struct PHANSO *x){
    printf("nhap tu so:");
    scanf("%d",&x->t);
    printf("\nnhap mau so:");
    scanf("%d",&x->m);
    chuanHoa(x);
}

void xuatPS(struct PHANSO *x){
    printf("%d/%d\t",x->t, x->m);
}

void NhapMang(struct PHANSO A[], int *n){
    printf("nhap n:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        nhapPS(&A[i]);
    }
}

void XuatMang(struct PHANSO A[], int *n){
    for(int i=0; i<n; i++){
        xuatPS(&A[i]);
    }
}

PS rutGon(struct PHANSO a){
    struct PHANSO b;
    b.t=a.t/UCLN(a.t,a.m);
    b.m=a.m/UCLN(a.t,a.m);
    return b;
}

void quyDong(struct PHANSO a, struct PHANSO b){
    int bcnn=a.m*b.m/UCLN(a.m, b.m);
    a.t=a.t*bcnn/a.m;
    b.t=b.t*bcnn/b.m;
    a.m=bcnn;
    b.m=bcnn;
}
// int tinhThuong(struct PHANSO a, struct PHANSO b, struct PHANSO *thuong){
//     if(b.t==0)
//     return 0;
//     thuong->t=a.t*b.m;
//     thuong->m=a.m*b.t;
//     chuanHoa(thuong);
//     rutGon(&thuong);
//     return 1;
// }

PS tinhTong(struct PHANSO a, struct PHANSO b){
    struct PHANSO tong;
    tong.t=a.t*b.m+b.t*a.m;
    tong.m=a.m*b.m;
    rutGon(tong);
    return tong;
}
int SoSanh(struct PHANSO a, struct PHANSO b){
    chuanHoa(&a);
    chuanHoa(&b);
    if(a.t*b.m> a.m*b.t){
        return 1;
    }else{
        if(a.t*b.m< a.m*b.t);
    }
}

PS tinhTongMang(struct PHANSO A[], int n){
    struct PHANSO t=A[0];
    for(int i=1; i<n; i++){
        t=tinhTong(t,A[i]);
    }
    return t;
}

void sapXep(struct PHANSO A[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
        if(SoSanh(A[i],A[j])){
            struct PHANSO t=A[i];
            A[i]=A[j];
            A[j]=t;
        }  
    }
}

PS timMaxMang(struct PHANSO A[], int n){
    struct PHANSO max=A[0];
    for(int i=1; i<n; i++){
        if(SoSanh(A[i],max)>0)
        max=A[i];
    }
    return max;
}

int main(){
    struct PHANSO A[100];
    int n; 
    NhapMang(A,n);
    printf("mang sap xep:");
    sapXep(A,n);
    XuatMang(A,n);
    struct PHANSO t= tinhTongMang(A,n);
    printf("\ntong mang:");
    xuatPS(&t);
    struct PHANSO max = timMaxMang(A,n);
    printf("\nphan tu lon nhat:");
    xuatPS(&max);
    return 0;
}