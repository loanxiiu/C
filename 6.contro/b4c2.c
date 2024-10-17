// Viết chương trình nhập số nguyên dương n gồm k chữ số (0< k<= 9) sắp xếp các chữ số của n theo thứ tự giảm giần

#include<stdio.h>
int main(){
    int n, temp, k=0 ;
    do{
        printf("Nhap n:");
        scanf("%d",&n);
        while(n>0){
            if(n%10){
                k++;
            }
            temp=n/10;
            n=temp;
        }
        printf("%d",k);
        if(0>=k || k>9){
            printf("Vui long nhap lai!\n");
        }
    }
    while(0>=k || k>9);
}