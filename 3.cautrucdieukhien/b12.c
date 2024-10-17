// Nhập 3 số nguyên a, b và n với a,b< n. Tính tổng các số nguyên dương nhỏ hơn n chia hết cho a nhưng không chia hết cho b

#include<stdio.h>
int main(){
    int a, b, n;
    int sum=0;
    printf("nhap a,b,n:");
    scanf("%d %d %d",&a, &b, &n);
    for(int i=1; i<n; i++){
        if(i%a==0&&i%b!=0){
            sum+=i;
        }
    }
    printf("tong la %d",sum);
}