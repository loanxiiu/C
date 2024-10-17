// Sử dụng con trỏ để làm lại các bài tập về mảng hai chiều
// a. Nhập xuất mảng
// b. Tính tổng các phần tử trên đường chéo chính...
// c. Đưa ra các số nguyên tố, chính phương, số đẹp trong mảng

#include<stdio.h>
#include<math.h>

int nhapmang(int *n, int *m, int a[][100]){
    for(int i=0; i<*n; i++){
        for(int j=0; j<*m; j++){
            printf("\nnhap a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
int xuatmang(int n, int m, int a[][100]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
int tongduongcheo(int n, int m, int a[][100]){
    int tong=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==j){
                tong=tong+a[i][j];
            }
        }
    } 
    printf("\ntong duong cheo chinh la: %d",tong);  
}
int nguyento(int n){
    int dem=0;
    if(n>1){
        for(int i=1; i<n+1; i++){
            if(n%i==0){
                dem++;
            }
        }
        if(dem==2){
            return 2;
        }
    }
}
int chinhphuong(int n){
    if(n>0){
        int nua;
        nua=sqrt(n);
        if(nua*nua==n){
            return 0;
        }
    }
}
int kiemtra(int n, int m, int a[][100]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(nguyento(a[i][j])==2){
                printf("\na[%d][%d]: %d la so nguyen to",i,j,a[i][j]);
            }
            if(chinhphuong(a[i][j])==0){
                printf("\na[%d][%d]: %d la chinh phuong",i,j,a[i][j]);
            }
        }
    }
}
int main(){
    int n, m, a[100][100];
    printf("nhap n va m:");
    scanf("%d %d",&n,&m);
    nhapmang(&n,&m,a);
    xuatmang(n,m,a);
    tongduongcheo(n,m,a);
    kiemtra(n,m,a);
}
