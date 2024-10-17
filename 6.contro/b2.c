// In giá trị của con trỏ và giá trị của biến mà nó trỏ tới

#include<stdio.h>
int main(){
    int a, *ptr;
    ptr=&a;
    printf("nhap a:");
    scanf("%d",&a);
    printf(" gia tri cua con tro la: %d\n gia tri cua bien ma no tro toi: %d",*ptr,ptr);
}