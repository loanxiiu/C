#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char ho[20], ten[20];
    printf("nhap ho: ");
    gets(ho );
    printf("nhap ten: ");
    gets( ten );
    strcat( ho , ten);
    printf("ho va ten la: ");
    puts(ho);
    getch();
}