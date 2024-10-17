// chữ số lớn và nhỏ nhất trong n

#include<stdio.h>
int main(){
    int n,x,tmp,tmp2;
    int max=0, min=9;
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
        if(min>tmp%10)
        min=tmp%10;
        tmp=tmp/10; 
    }
    printf("so nho nhat la:%d",min);  
    printf("\n%d",n);
    tmp2=n;
    while(tmp2>0){
        if(max<tmp2%10)
        max=tmp2%10;
        tmp2=tmp2/10; 
    }
    printf("\nso lon nhat la:%d",max);        
}