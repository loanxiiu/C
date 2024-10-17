#include<stdio.h>
void nhapmang(int n,int a[][100]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("nhap a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void xuatmang(int n,int a[][100]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int nguyento(int n){
    int count=0;
        if(n>1){
            for(int i=1; i<n+1; i++){
            if(n%i==0){
                count=count+1;
            }
        }
        if(count==2){
            return 2;
        }
    }
}

int tongcacphantulasonguyentotrongmatrantamgiactrencoduongcheochinh(int n, int a[][100]){
    int tong=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i<=j && nguyento(a[i][j])==2)
                    tong=tong+a[i][j];
            }
        }
    printf("Tong cac phan tu la so nguyen to trong ma tran tam giac tren co duong cheo chinh la: %d",tong);
}

int tongcacphantulasonguyentotrongmatrantamgiactrenkhongcoduongcheochinh(int n, int a[][100]){
    int tong=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i<j && nguyento(a[i][j])==2)
                    tong=tong+a[i][j];
            }
        }
    printf("\nTong cac phan tu la so nguyen to trong ma tran tam giac tren khong co duong cheo chinh la: %d",tong);
}

int tongcacphantulasonguyentotrongmatrantamgiacduoicoduongcheochinh(int n, int a[][100]){
    int tong=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i>=j && nguyento(a[i][j])==2)
                    tong=tong+a[i][j];
            }
        }
    printf("\nTong cac phan tu la so nguyen to trong ma tran tam giac duoi co duong cheo chinh la: %d",tong);
}

int tongcacphantulasonguyentotrongmatrantamgiacduoikhongcoduongcheochinh(int n, int a[][100]){
    int tong=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i>j && nguyento(a[i][j])==2)
                    tong=tong+a[i][j];
            }
        }
    printf("\nTong cac phan tu la so nguyen to trong ma tran tam giac duoi khong co duong cheo chinh la: %d",tong);
}

int main(){
    int n, a[100][100];
    printf("nhap n:");
    scanf("%d",&n);
    nhapmang(n,a);
    xuatmang(n,a);
    tongcacphantulasonguyentotrongmatrantamgiactrencoduongcheochinh(n,a);
    tongcacphantulasonguyentotrongmatrantamgiactrenkhongcoduongcheochinh(n,a);
    tongcacphantulasonguyentotrongmatrantamgiacduoicoduongcheochinh(n,a);
    tongcacphantulasonguyentotrongmatrantamgiacduoikhongcoduongcheochinh(n,a);
}