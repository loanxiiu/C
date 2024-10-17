// Sử dụng con trỏ để làm lại các bài tập về mảng một chiều
// a. Nhập xuất mảng
// b. Tính tổng các phần tử âm, nguyên tố, chính phương,...

#include<stdio.h>
#include<math.h>
int main(){
    int n, tongam=0, tongnguyento=0, tongchinhphuong=0;
    printf("nhap n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("nhap phan tu a[%d]:",i);
        scanf("%d",a+i);
    }

    for(int j=0; j<n; j++){
        printf("%d\t",*(a+j));
    }
    printf("\n");

    for(int j=0; j<n; j++){
        if(*(a+j)<0){
            tongam=tongam+*(a+j);
        }
    }
    printf("tong cac so am trong mang a[%d] la:%d",n,tongam);
    printf("\n");

    for(int i=0; i<n; i++){
        int count=0;
        if(a[i]>1){
            for(int j=2; j<i; j++){
                if(a[i]%j==0){
                    count++;
                }
            }
            if(count==0){
                tongnguyento=tongnguyento+*(a+i);
            }
        }
    }
    printf("tong cac so nguyen to trong mang a[%d] la: %d",n,tongnguyento);

    for(int i=0; i<n; i++){
        if(a[i]>0){
            int b;
            b=sqrt(a[i]);
            if(b*b==a[i]){
                tongchinhphuong=tongchinhphuong+a[i];
            }
        }
    }
    printf("\ntong cac so chinh phuong trong mang a[%d] la: %d",n,tongchinhphuong);
}