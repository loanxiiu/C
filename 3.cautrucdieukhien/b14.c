// Nhập một số nguyên dương n. Xuất ra số ngược lại

#include<stdio.h>
int main(){
    int n,x,tmp;
    int sodao=0;
    do{
        printf("nhap n:");
        scanf("%d",&n);
        if(n<=0){
            printf("nhap lai!");
        }
    }
    while(n<=0);
    tmp=n;
    while(tmp>0){
        x=tmp%10;
        sodao=sodao*10+x;
        tmp=tmp/10;
    }
    printf("%d",sodao);
}