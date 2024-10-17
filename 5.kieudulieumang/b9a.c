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

int tongcacphantuduongtrenduongcheochinh(int n, int a[][100]){
    int tong=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j&& a[i][j]>0){
                tong=tong+a[i][j];
            }
        }
    }
    printf("Tong cac phan tu duong tren duong cheo chinh la: %d",tong);
}

int main(){
    int n, a[100][100];
    printf("nhap n:");
    scanf("%d",&n);
    nhapmang(n,a);
    xuatmang(n,a);
    tongcacphantuduongtrenduongcheochinh(n,a);
}