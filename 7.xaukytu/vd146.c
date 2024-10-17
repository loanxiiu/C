#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char xau[255],*s;
    printf("nhap xau:");
    gets(xau);
    s=strupr(xau);
    // s=strlwr(xau) doi chu hoa thanh chu thuong
    printf("xau chu hoa: ");
    puts(s);
    getch();
    return 0;
}
