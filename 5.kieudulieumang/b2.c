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
int chanle(int n, int a[]){
    int chan=0;
    int le=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0)
        chan+=1;
        else
        le+=1;   
    }
    if(chan==n)
    printf("mang toan so chan");
    else if(le==n)
    printf("mang toan so le");
    else 
    printf("mang co ca chan lan le");
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
int demnguyento(int n, int a[]){
    int dem=0;
    for(int i=0; i<n; i++){
        if(nguyento(a[i])==1){
            dem+=1;
        }
    }
    printf("\nso nguyen to trong mang la: %d",dem);
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
int demchinhphuong(int n, int a[]){
    int dem=0;
    for(int i=0; i<n; i++){
        if(chinhphuong(a[i])==1){
            dem+=1;
        }
    }
    printf("\nso chinh phuong trong mang la: %d",dem);
}
int tang(int n, int a[]){
    for(int i = 0; i < n-1; i++){
        if(a[i] > a[i+1]) 
        return 0;
    }
    return 1;
}
int giam(int n, int a[]){
    for(int i = 0; i < n-1; i++){
        if(a[i] < a[i+1]) 
        return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    int a[n];
    nhap(n,a);
    if(tang(n,a)==1)
        printf("daytang");
    else if(giam(n,a)==1)
    printf("day giam");
    else
    printf("day khong tang khong giam"); 
}