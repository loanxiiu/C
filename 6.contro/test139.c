#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int ngto(long a){
    int count=0;
    for(int i=1; i<a+1; i++){
        if(a%i==0){
            count+=1;
        }
    }
    if(count==2){
        return 2;
    }
}
int main(){
    long *prime=NULL, x=0;
    int i=0, found=0, n=0, j;
    printf("Ban muon tim bao nhieu so nguyen to?");
    scanf("%d",&n);
    prime=(long *)malloc(n*sizeof(long));
    if(prime==NULL){
        printf("khong du bo nho!");
        return 0;
    }
    *prime=2;
    *(prime+1)=3;
    *(prime+2)=5;
    x=5;
    j=3;
    do{
        x+=2;
        if(ngto(x)==2){
            *(prime+j)=x;
            j++;
        }
    }
    while (j<n);
    printf("%d so nguyen to dau tien la: \n",n);
    for(i=0; i<n; i++)
    printf("\t%ld",*(prime+i));
    getch(); 
}
