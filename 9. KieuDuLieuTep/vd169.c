// Viết chương trình ghi chuỗi ký tự lên tệp tin văn bản C:\\Users\\ploan\\Desktop\\vd169.txt

#include<stdio.h>
#include<conio.h>

int main(){
    FILE *f;
    f=fopen("C:\\Users\\ploan\\Desktop\\vd169.txt","r+"); // f=fopen("vd169.txt","r+");
    if(f!=NULL){
        fputs("Em oi Ha Noi.pho\n",f);
        fputs("Ta con em, mui hoang lan; ta con em, mui hoa sua.",f);
        fclose(f);
    }
    getch();
}