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
int vitrixuathienlancuoi(int n, int a[]){
    int x,i;
    printf("nhap x:");
    scanf("%d",&x);
    for( i=n-1;i>=0;i--){
        if(a[i]==x)
        return i;
        break;
    }
    printf("vi tri %d xuat hien lan cuoi la %d",x,i-1);
}
int nguyento(int n){
    int count=0;
    if(n>1){
        for(int i=1; i<n+1; i++){
        if(n%i==0){
            count=count+1;
        }
    }
    if(count==2)
    return 1;
    }
}
int vitringuyentodautien(int n, int a[]){
    for(int  i=0; i<n; i++){
        if(nguyento(a[i])){
            printf("vi tri so nguyen to dau tien trong mang la %d",i+1);
        }
    }
}
int min( int n, int a[]){
    int min=a[0];
    for(int i=0; i<n; i++){
        if(min>a[i])
        min=a[i];
    }
    printf("so nho nhat trong mang %d",min);
}
int minduong(int n, int a[]){
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
int maxam(int n, int a[]){
    int i,max;
    for(i=0; i<n; i++) {
        if(a[i]<0) {
            max = a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(max<a[i]&&a[i]<0)
        max=a[i];
    }
    printf("\nso am lon nhat trong mang %d",max);   
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    int a[n];
    nhap(n,a);
    xuat(n,a);
    maxam(n,a);
    minduong(n,a);
}
