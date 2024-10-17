// Tính tổng các số nguyên tố nhỏ hơn n (0<n<5000)

#include<stdio.h>
int main(){
    int n;
    int sum=0;
    do{
        printf("nhap n:");
        scanf("%d",&n);
        if(n<=0&&n>=50000)
        printf("nhap lai!");
    }
    while(n<=0&&n>=50000);
        for(int i=1; i<n; i++){
            int count=0;
        for(int j=1; j<=i; j++){
            if(i%j==0)
            count+=1;
        }
        if(count==2){
            sum=sum+i;
        }
    }
     printf("\ttong cac so nguyen to nho hon n la:%d",sum);
}