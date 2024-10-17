#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    FILE *f;
    int Line=0, Characters=0, Words=0;
    char c;
    f=fopen("b2.txt","r");
    while(c=fgetc(f)!=EOF){
        if(c==' ')
            Words++;
        else if(c=='\n')
            Line++;
        else
        Characters++;
    }
    printf("%d,%d,%d",Words,Line,Characters);
    
}
