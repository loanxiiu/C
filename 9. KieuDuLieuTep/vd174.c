// Viết chương trình ghi lên tệp tin vd174.txt đặt 3 giá trị số thực/nguyên/nguyên dài.
// sau đó đọc các số từ tệp tin vừa ghi và hiển thị lên màn hình.

#include<stdio.h>
#include<conio.h>
int main(){
    FILE *f;
    f=fopen("vd174.txt","wb");
    if(f!=NULL){
        double d=3.14;
        int  i=101;
        long l=54321;
        fwrite(&d, sizeof(double),1,f);
        fwrite(&i, sizeof(int), 1, f);
        fwrite(&l, sizeof(long), 1,f);
        /*doc tu tap tin*/
        rewind(f);
        fread(&d, sizeof(double),1,f);
        fread(&i, sizeof(int), 1, f);
        fread(&l, sizeof(long), 1,f);
        printf("Cac ket qua la: %f %d %ld",d,i,l);
        fclose(f);
    }
    getch();
}