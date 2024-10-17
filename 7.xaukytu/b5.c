// viết các hàm left, right...
//  Hàm Left, Mid và Right trả về một phần của chuỗi. Hàm Left trả về các ký tự ở đầu chuỗi.

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
char *left( char *src,int n)
{
     if (n>=strlen(src))
         return src;
 
      char *temp=malloc( (n+1)*sizeof(char));
       temp[n]='\0';
      return strncpy(temp,src,n);  
}
 
char *right( char *src,int n)
{
     if (n>=strlen(src))
         return src;
 
      char *temp=malloc( (n+1)*sizeof(char));
      temp[n]='\0';
      int res= strlen(src) - n;
      return strncpy(temp, src+res ,n);
}
 
char *mid( char *src,int n, int k)
{
     if ( n >strlen(src) || n< 0)
         return "SAO MÀ CẮT DC";
     
      if ( (k+n-1) >strlen(src))
      {
          return right(src,strlen(src)-n+1);
      }
 
      char *temp=malloc( (k+1)*sizeof(char));
      temp[k]='\0';
      return strncpy(temp,src+n-1,k);
}
int main()
{
    char s[15];
    int n, k;
    printf("s= ");
    gets(s);
    printf("n= ");
    scanf("%d",&n);
    printf("k= ");
    scanf("%d",&k);
    printf("Cat %d ky tu dau cua chuoi '%s' la: %s\n",n,s,left(s,n));
    printf("Cat %d ky tu giua cua chuoi '%s' la: %s\n",n,s,mid(s,n,k));
    printf("Cat %d ky tu cuoi cua chuoi '%s' la: %s",n,s,right(s,k));
    getch();
    return 0;
} 