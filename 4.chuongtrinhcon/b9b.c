#include<stdio.h>
int luythua(int a, int n){
    if (n == 0) return 1;
    return a * luythua(a, n-1);
}
int main(){
    int n, a;
    printf("nhap a va n:");
    scanf("%d %d",&a,&n);
    printf("%d mu %d bang:%d",a,n,luythua(a,n));
}