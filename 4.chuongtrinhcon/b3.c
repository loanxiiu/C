#include<stdio.h>
#include<math.h>
void chinhphuong(int n){
    int a=sqrt(n);
    if(a*a==n)
        printf("%d la so chinh phuong",n);
    else
        printf("%d khong la so chinh phuong",n);
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    chinhphuong(n);
}