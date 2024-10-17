// Nhập một chữ cái. Nếu là chữ thường thì đổi thành chữ hoa, ngược lại đổi sang chữ thường

#include<stdio.h>
#include<conio.h>
void main(){
    char c;
    printf("Nhap 1 ki tu tu ban phim:");
    scanf("%c",&c);
    if(c>='a'&& c<='z'){
    c=c-32;
    printf("ki tu da chuyen doi la:%c",c);
    }
    else if(c>='A'&& c<='Z'){
    printf("ki tu da nhap la:%c",c);
    }
    else printf("ki tu khong hop le!");
}