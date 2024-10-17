// Viết chương trình chép tập tin vd169.txt sang tệp tin vd171.txt

#include<stdio.h>
#include<conio.h>
 
int main(){
    FILE *f1, *f2;
    f1=fopen("vd169.txt","rt");
    f2=fopen("vd171.txt","wt");
    if(f1!=NULL && f2!=NULL){
        int ch=fgetc(f1);
        while(!feof(f1)){
            fputc(ch,f2);
            ch=fgetc(f1);
        }
        // fcloseall();
    }
    // getch();
}