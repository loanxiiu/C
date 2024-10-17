#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char xau[255], s[255], x[255];
    printf("nhap xau:");
    gets(xau);
    strcpy(s,xau);
    strncpy(x,xau,2);
    printf("xau dich:");
    puts(s);
    puts(x);
    puts(strchr(xau,'c'));
    getch();
}