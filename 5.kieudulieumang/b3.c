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
int chiahetmkhongchiahetk(int n,int a[]){
    int m,k;
    printf("nhap m va k:");
    scanf("%d %d",&m,&k);
    int dem=0;
    for( int i=0; i<n; i++){
        if(a[i]%m==0 &&a[i]%k!=0)
        dem+=1;
    }
    printf("co %d so chia het cho %d nhung khong chia het cho %d",dem,m,k);
}
int nguyento(int n){
    int count=0;
    if(n>0){
        for(int i=1; i<n+1; i++){
        if(n%i==0){
            count+=1;
        }
    }
    if(count==2)
    return 1;
    }
}
int tongnguyento(int n, int a[]){
    int dem=0;
    int sum=0;
    for(int i=0; i<n; i++){
        if(nguyento(a[i])==1){
            sum+=a[i];
        }
    }
    printf("\ntong nguyen to trong mang la: %d",sum);
}
int chinhphuong(int n){
    if(n>0){
        int a;
        a=sqrt(n);
        if(a*a==n)
        return 1;
        else 
        return 0;
    }
}
int tongchinhphuong(int n, int a[]){
    int dem=0;
    int sum=0;
    for(int i=0; i<n; i++){
        if(chinhphuong(a[i])==1){
            sum+=a[i];
        }
    }
    printf("\ntong chinh phuong trong mang la: %d",sum);
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    int a[n];
    nhap(n,a);
    xuat(n,a);
    tongnguyento(n,a);
    tongchinhphuong(n,a);
}