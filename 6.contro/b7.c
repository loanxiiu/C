//  Nhập vào 2 số nguyên a,b tính tổng các số trong đoạn [a,b] trong mảng

#include<stdio.h>
int tongcacsotrongdoan(int a, int b, int arr[]){
    int tmp=0;
    arr[0]=a;
    for(int i=1; i<b-a+1; i++){
        arr[i]=arr[i-1]+1;
        tmp=tmp+arr[i];
    }
    for(int i=0; i<b-a+1; i++){
        printf("\t%d",arr[i]);
    }
    printf("\ntong cac so trong doan [%d,%d] la:%d",a,b,tmp+arr[0]);
}
int main(){
    int a, b, arr[100];
    printf("nhap a va b:");
    scanf("%d %d",&a,&b);
    tongcacsotrongdoan(a,b,arr);
}