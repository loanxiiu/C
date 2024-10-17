#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool khoangtrang(char c){
    return c==' ' || c=='\t' || c=='\n';
}
int main(){
    char str[100];
    printf("nhap chuoi:");
    fgets(str,99,stdin);
    int size= strlen(str);
    printf("\nxoa khoang trang:");
    for( int i=0; i<size; i++){
        if(!khoangtrang(str[i])){
            printf("%c",str[i]);
        }
    }
    return 0;
}