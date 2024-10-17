#include<stdio.h>
int sodao(int n){
    int x, tmp;
    int sodao=0;
    tmp=n;
        while(tmp>0){
        x=tmp%10;
        sodao=sodao*10+x;
        tmp=tmp/10;
    }
    if(sodao==n){
        return 1;
    }
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    if(sodao(n)==1)
    printf("%d la so doi xung",n);
    else
    printf("%d khong la doi xung",n);
}