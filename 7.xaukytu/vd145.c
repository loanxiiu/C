#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char xau[255];
    int dodai;
    printf("nhap xau:");
    gets(xau);
    dodai= strlen(xau);
    printf("xau vua nhap:");
    puts(xau);
    printf("co do dai %d", dodai);
}