#include<stdio.h>
void nguyento(int n){
    int count=0;
    for(int i=1; i<n+1; i++){
        if(n%i==0){
            count+=1;
        }
    }
    if(count==2)
        printf("%d la so nguyen to!",n);
    else{
        printf("%d khong la so nguyen to!",n);
    }
    
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    nguyento(n);
}