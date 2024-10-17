#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int hienthitu(char s[]){
    int size= strlen(s);
    for( int i=0; i<size; i++){
        printf("%c",s[i]);
    }
}

void palidrome(char s[]){
    int str[100];
    int size= strlen(s);
    for(int i=0; i<size; i++){
        for(int j=size-1; j>=0; j--){

        }
    }
}

int main(){
    char str[100];
    printf("nhap chuoi:");
    fgets(str,99,stdin);
    palidrome(str);
    return 0;
}