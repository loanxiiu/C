#include<stdio.h>
int luythua(int a, int n){
    int tmp=1;
    for(int i=0; i<n;i++ ){
       tmp*=a; 
    }
    return tmp;
}
int main(){
    int n, a;
    printf("nhap a va n:");
    scanf("%d %d",&a,&n);
    printf("%d mu %d bang:%d",a,n,luythua(a,n));
}