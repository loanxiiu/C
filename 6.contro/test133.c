#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void tim(int code);
int main(){
    int i;
    tt:
    printf("\nTim khach hang co ma la:");
    scanf("%d",&i);
    tim(i);
    printf("\nCo tiep tuc nua khong C/K:");
    printf("\n");
    getch();
    if(toupper(getch())=='C')
    goto tt;
}

void tim(int code){
    static char *list[]={
        "Khong co so thu tu nay",
        "Nguyen Van Toan",
        "Huynh Tuan Nghia",
    };
    printf("\nMa so %d",code);
    printf(": %s",(code<1||code>3)?list[0]:list[code]);
}