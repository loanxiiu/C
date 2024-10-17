// Viết hàm proper(char s[]) đổi các kí tự đầu tiên của mỗi từ sang kí tự hoa

#include<stdio.h>
#include<conio.h>
#include<string.h>
int proper(char s[]){
    if ((s[0]>='a'&& s[0]<='z')){
        s[0]-=32;
        printf("%c",s[0]);
    }
    else{
        printf("%c",s[0]);
    }
    for(int i=1; s[i]; i++){
        if(s[i-1]==' '){
            if ((s[i]>='a'&& s[i]<='z')){
                s[i]-=32;
                printf("%c",s[i]);
            }
            else{
                printf("%c",s[i]);
            }
        }
        else{
            printf("%c",s[i]);
        }
    }
}
int main(){
    char s[20];
    printf("nhap cac ki tu: ");
    gets(s);
    proper(s);
    getch();
}