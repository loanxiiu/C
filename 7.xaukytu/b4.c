// Đếm xem có bao nhiêu từ trong s. In ra các từ trong s

#include<stdio.h>
#include<conio.h>
#include<string.h>
int dem(char s[]){
    int dem=0;
    int count=0;
    for(int i=0; s[i]; i++){
        count++;
        if(s[i]=='s'){
            dem++;
        }
    }
    printf("co %d ki tu s trong chuoi\n",dem);
}
int kitutrongs(char s[]){
    int count=0;
    for(int i=0; s[i]; i++){
        count++;
    }
    int i,j;
    for( i=0; s[i]; i++){
        for( j=count; j>=0; j--){
            if(s[i]=='s' && s[j]=='s')
                for(int t=i+1; t<j; t++){
                    printf("%c",s[t]);
                } 
        }
    }
}
int main(){
    char s[20];
    printf("nhap cac ki tu: ");
    gets(s);
    dem(s);
    kitutrongs(s);
    getch();
}