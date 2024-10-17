#include<stdio.h>
int hoanhao(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)
        printf("%d la so hoan hao",n);
    else{
        printf("%d khong la so hoan hao",n);
    }
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    hoanhao(n);
}