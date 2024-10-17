// Viết chương trình đếm số chữ của từng loại chữ trong bảng chữ cái 
// được chứa trong một tệp văn bản ( tệp có bao nhiêu chữ 'A', chữ 'B'...)

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    FILE *f;
    f=fopen("b1.txt","r+");
    int n=0;
    char str[n];
    char s[100];
    int dem[100];
    char c;
    char d='A';
    while((c=fgetc(f))!=EOF){
        str[n]=c;
        n++;
    }
    // for(int i=0; i<n; i++){
    //     printf("%c",str[i]);
    // }
     for(int i=0; i<26; i++){
            dem[i]=0;
        }
        for(int i=0; i<26; i++){
          s[i]=d;
          d++;
        }
        for(int i=0; i<26; i++){
            printf("\nSo ki tu %c:",s[i]);
            for(int j=0; j<n; j++){
                if(s[i]==str[j]){
                    dem[i]++;
                }
            }
            printf("%d",dem[i]);
        }
    fclose(f);
}