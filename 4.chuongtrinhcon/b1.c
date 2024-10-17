#include<stdio.h>
int fibonacy(int n){
    int f0=1, f1=1, fn=0;
    for( int i=0; i<n; i++){
        f0=f1;
        f1=fn;
        fn=f0+f1;
    }
    return fn;
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
       printf("%3d",fibonacy(i));
    }
}
