#include<stdio.h>
int hoanvi(int n){
    for(int a=1; a<n+1; a++){
        for(int b=1; b<n+1; b++){
            for(int c=1; c<n+1; c++){
                for(int d=1; d<n+1; d++){
                if( a!=b && b!=c && c!=d && d!=a && a!=c && b!=d && a!=5){
                    printf("%d %d %d %d",a,b,c,d);
                    printf("\n");
                }
                }
            }
        }
    }  
}
int main(){
    int n=4;
    int sum=hoanvi(n);
    printf("%d",sum);
}