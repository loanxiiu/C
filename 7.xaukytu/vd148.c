#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char xau[255],*s;
    printf("nhap xau: ");
    gets(xau);
    printf("%d\n",atoi(xau));
    printf("%ld\n",atol(xau));
    printf("%f\n",atof(xau));
    s=strstr(xau,"vien");
    printf("xau trich ra: ");
    puts(s);
    printf("so sanh xau voi s : %d",strcmp(xau,s));
    printf("\n");
    printf("so sanh xau voi s : %d",stricmp(xau,s));
    printf("\n");
    puts(memset(xau,'a',5));
    getch();
}