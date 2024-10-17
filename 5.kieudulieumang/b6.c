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
    return 2;
    }
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
int suantvacp(int n, int a[]){
    printf("\n");
    for(int i=0; i<n; i++){
        if(chinhphuong(a[i])){
            a[i]=-1;
        }
        else if(nguyento(a[i])==2){
            a[i]=0;
        }
        printf("%3d",a[i]);
    }
}
int chen01(int n, int a[]){
    printf("\n");
    for(int i=0; i<n; i++){
        if(chinhphuong(a[i])){
           printf("  -1");
           printf("%3d",a[i]);
        }
        else if(nguyento(a[i])==1){
            printf("%3d",a[i]);
            printf("  0");
        }
        else
        printf("%3d",a[i]);
    }
}
int xoanguyento(int n, int a[]){
    printf("\n");
    for(int i=0; i<n; i++){
        if(nguyento(a[i])==2){
            continue;
        }
        else{
            printf("%3d",a[i]);
        }
    }
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    int a[n];
    nhap(n,a);
    xuat(n,a);
    xoanguyento(n,a);
}