// Đếm số lượng từ "em" trong sâu kí tự được nhập từ bàn phím

#include<stdio.h>
#include<string.h>

int demem(char s[]){
    int count=0;
    int size=strlen(s);
    for(int i=0; i<size; i++){
        if(s[i]=='e'&& s[i+1]=='m'){
            count++;
        }
    }
    printf("trong chuoi s co %d tu 'em'",count);
} 

int main(){
    char s[100];
    printf("nhap chuoi:");
    fgets(s,99,stdin);
    demem(s);
}