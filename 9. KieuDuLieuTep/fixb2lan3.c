#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool khoangtrang(char c){
    return c==' ' || c=='\t' || c=='\n' || c=='\0';
}

void hienthitu(char *str, int pos, int length ){
    printf("tu dai nhat:");
    int i;
    for( i=pos; i<pos+length; i++){
        printf("%c",str[i]);
    }
    printf("\ndo dai:%d \nvi tri cua tu: %d",length, pos);
}

int timvitri(char *str, int *length){
    int len=0;
    int lenmax=0;
    int pos=0;
    int poscurrent=0;
    int size = strlen(str);
    int i;
    for(i=0; i<size; i++){
        if(!khoangtrang(str[i])){
            poscurrent=i-len;
            len++;
        }
        else{
            if(len>lenmax){
                lenmax=len;
                pos=poscurrent;
            }
            len=0;
        }
    }
    *length=lenmax;
    printf("t%dt",lenmax);
    return pos;
}

int main(){
    int characters=0, line=0, word=0, space=0;
    char s[1000000];
    char c;
    FILE *f;
    f=fopen("b2.txt","r+");
    if(f==NULL){
        printf("error!");
        exit(1);
    }
    while((c=fgetc(f))!=EOF){
        s[characters]=c;
        characters++;
        if(c=='\n'||c=='\0')
        line++;
        if(c!=' '&&c!='\n'&&c!='\0')
        word++;
        if(c==' '){
            space++;
        }
    } 
    if(characters>0){
        line++;
    }
        for(int i=0; i<characters; i++){
        printf("%c",s[i]);
    }
    printf("\nVan ban co %d dong",line);
    printf("\nvan ban co %d ki tu",characters);

    int dong[100];
    for(int i=0; i<line; i++){
        dong[i]=0;
    }
    int count=0;
    for(int i=0; i<line; i++){
        for(int j=0; j<characters; j++){
            dong[i]++;
            count++;
            if(s[j]=='\n'){
                break;
            }
            j=count;
        }
    }
    int kitudongmax=dong[0];
    int dongmax=0;
    for(int i=1; i<line; i++){
        if(kitudongmax<dong[i]){
            kitudongmax=dong[i];
            dongmax=i+1;
        }
    }
    printf("\nDong %d dai nhat co %d ki tu",dongmax,kitudongmax);

    printf("\n");
    int len=0;
    int pos=timvitri(s, &len);
    hienthitu(s, pos, len);
    return 0;

}