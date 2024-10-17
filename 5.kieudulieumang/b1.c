#include<stdio.h>
int nhap(int n, int a[]){
    for(int i=0; i<n; i++){
        printf("nhap a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    return a[n];
}
int xuat( int n, int a[]){
    for(int i=0; i<n;i++){
        printf("%3d",a[i]);
    }
}
int main(){
    int n, a[100];
    printf("nhap n:");
    scanf("%d",&n);
    nhap(n,a);
    xuat(n,a);
}