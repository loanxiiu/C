// Tìm bội số chung nhỏ nhất của 2 số nguyên dương a và b nhập từ bàn phím

#include<stdio.h>
int main(){
    int a,b;
    printf("nhap a va b:");
    scanf("%d %d",&a,&b);
    for(int i=1; i<=a*b; i++){
        if(i%a==0 && i%b==0){
            printf("%d",i);
            break;
        }
    }
}