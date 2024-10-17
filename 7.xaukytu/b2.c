// Viết hàm lower(char s[]) đổi toàn bộ các kí tự sang kí tự thường( giống hàm strlwr)

#include<stdio.h>
#include<conio.h>
#include<string.h>
int lower(char s[]){
    for(int i=0; s[i]; i++){
        if ((s[i]>='A'&& s[i]<='Z')){
            s[i]+=32;
            printf("%c",s[i]);
        }
        else{
            printf("%c",s[i]);
        }
    }
}
int main(){
    char s[20];
    printf("nhap cac ki tu:");
    gets(s);
    lower(s);
    getch();
}