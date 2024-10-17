// Viết chương trình khai báo mảng hai chiều có 12x12 phần tử kiểu char. Gán ký tự 'X' cho mọi phần tử của mảng này. Sử dụng con trỏ đến mảng để in giá trị các phần tử mảng lên màn hình ở dạng lưới

#include<stdio.h>
int main(){
    char a[12][12];
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            a[i][j]='X';
        }
    }

    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            printf("%c\t",*(*(a+i)+j));
        }
        printf("\n");
    }
}