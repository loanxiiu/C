// Viết hàm standard(char s[]) loại bỏ toàn bộ dấu trắng đầu xâu, cuối xâu và giữa 2 từ trong s chỉ còn 1 khoảng trắng

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool khoangtrang(char c){
    return c==' ' || c=='\t' || c=='\n';
}

int standard( char s[]){
    int size= strlen(s);
    printf("\nxoa khoang trang:");
    for( int i=0; i<size; i++){
        if(!khoangtrang(s[i])){
            printf("%c",s[i]);
        }
    } 
}

int main(){
    char str[100];
    printf("nhap chuoi:");
    fgets(str,99,stdin);
    standard(str);
    return 0;
}
