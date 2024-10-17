#include<stdio.h>
#include<math.h>
#define MAX 100
int manggiam();
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
int mangb(int n, int a[]){
    int b[MAX], m = 0; 
    for(int i = 0; i < n; i++) { 
        if(nguyento(a[i]) == 1) { 
            b[m] = a[i]; 
            m++; 
        } 
    } 
    xuat(m, b);
}
int mangbvac(int n, int a[]){
    int b[MAX],c[MAX], m = 0, p=0; 
    for(int i = 0; i < n; i++) { 
        if(a[i]>0) { 
            b[m] = a[i]; 
            m++; 
        } 
        else{
        c[p]=a[i];
        p++;}
    } 
    xuat(m, b);
    manggiam(m,b);
    xuat(p, c);
    manggiam(p,c);

}
int manggiam(int n, int a[]){
    int i,j;
    int tg=a[0];
   for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg; } }}      
    for(int i = 0; i < n; i++){
        printf("%3d", a[i]);
    } 
}
int mangtang(int n, int a[]){
    int i,j;
    int tg=a[0];
   for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg; } }}      
    for(int i = 0; i < n; i++){
        printf("%3d", a[i]);
    }  
}
int tanggiam0(int n, int a[]){
    int b[MAX], c[MAX], d[MAX], m = 0, p=0, h=0; 
    for(int i = 0; i < n; i++) { 
        if(a[i]>0) { 
            b[m] = a[i]; 
            m++; 
        } 
        else if(a[i]<0){
        c[p]=a[i];
        p++;}
        else{
            d[h]=a[i];
            h++;
        }
    } 
    manggiam(m,b);
    mangtang(p,c);
    xuat(h,d);
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    int a[n];
    nhap(n,a);
    xuat(n,a);
    printf("\n");
    tanggiam0(n,a);
}