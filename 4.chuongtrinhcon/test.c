#include<stdio.h>
#include<math.h>
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
    printf("\n");
}
int maxam(int n, int a[]){
    int i,min;
    for(i=0; i<n; i++) {
        if(a[i]>0) {
            min = a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(min>a[i]&&a[i]>0)
        min=a[i];
    }
    printf("\nso duong nho nhat trong mang %d",min);   
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    int a[n];
    nhap(n,a);
    xuat(n,a);
    maxam(n,a);
}