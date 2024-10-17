// Tính tiền đi taxi từ số km nhập vào, biết:
// 1 km đầu giá 15k
// từ 2km- 5km giá 13.5k
// từ 6km trở đi giá 11k
// trên 120km được giảm 10% tổng tiền

#include<stdio.h>
int main(){
    int n, tien;
    printf("nhap so km:");
    scanf("%d",&n);
    if(0<n<2)
    tien=n*15000;
    else if(2<=n<6)
    tien=2*15000+(n-2)*13500;
    else if(6<=n<=120)
    tien=2*15000+4*13500+(n-6)*11000;
    else
    tien=2*15000+4*13500+(n-6)*11000-(2*15000+4*13500+(n-6)*11000)*10/100;
    printf("%d het %d dong!",n,tien);
}