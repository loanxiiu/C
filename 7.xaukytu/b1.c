// Viết hàm upper(char s[]) đổi toàn bộ các kí tự sang kí tự hoa( giống hàm strupr)

#include<stdio.h>
#include<conio.h>
#include<string.h>
int upper(char s[]){
    for(int i=0; s[i]; i++){
        if ((s[i]>='a'&& s[i]<='z')){
            s[i]-=32;
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
    upper(s);
    getch();
}