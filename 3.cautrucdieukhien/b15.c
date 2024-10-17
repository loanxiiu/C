// Tìm và in lên  màn hình tất cả các số nguyên trong phạm vi từ 10 đến 99 sao cho tích của 2 chữ số bằng 2 lần tổng của hai chữ số đó 

#include<stdio.h>
int main(){
    int chuc, donvi;
    for (int i=10; i<100; i++){
        chuc=i/10;
        donvi=i%10;
        if(chuc*donvi==2*(chuc+donvi)){
            printf("%4d",i);
        }
    }
}