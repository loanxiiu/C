// Kiểm tra xem từ có phải là palindrome hay không? từ là palidrome là từ đọc từ phải sang trái cũng giống từ trái sang phải ,Vd: civic, noon,...

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdbool.h>

int hienthitu(char s[]){
    int size= strlen(s);
    for( int i=0; i<size; i++){
        printf("%c",s[i]);
    }
}

void palidrome(char s[]){
    int flag=1;
    int size= strlen(s);
    for(int i=0; i<size/2; i++){
        if(s[i]!=s[size-i-1]){
            printf("%c khong la tu palidrome",hienthitu(s));
            flag=0;
            break;
        }
    }
    if(flag!=0){ 
        // hoặc if(flag){}
        printf("%c la tu palidrome",hienthitu(s));
    }
    getch();
}

int main(){
    char str[100];
    printf("nhap chuoi:");
    gets(str);
    palidrome(str);
}