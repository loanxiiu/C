#include<stdio.h>
int InDaoNguoc(int n)
{
    if(n!=0)
    {
    int tmp=n%10;
    printf("%d",tmp);
    if(n/10>=10){
        InDaoNguoc(n/10);
    }
    }
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    printf("%d la so dao",InDaoNguoc(n));

}