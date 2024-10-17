// Nhập n. In n số đầu tiên trong dãy Fibonacy biết:
// F0=F1=1
// fn = fn-1 + fn-2

#include<stdio.h>
int main(){
    int n;
    int f0=1, f1=1, fn;
    printf("nhap n:");
    scanf("%d",&n);
        if (n < 0) {
        return -1;
    } 
    else if (n == 0 || n == 1) {
        return n;
    } else{
        for(int i=0; i<n; i++){
        f0=f1;
        f1=fn;
        fn=f0+f1;
        printf("%4d",fn);
        }
    }
}