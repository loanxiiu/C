// các số trong n có tăng dần hay giảm dần không

#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, tmp1, tmp2, socuoi, sokecuoi;
    do{
        printf("nhap n:");
        scanf("%d",&n);
        if(n<=0)
        printf("nhap lai!");
    }
    while(n<=0);
    bool check= true;
    tmp1=n;
    socuoi=tmp1%10;
    tmp1/=10;
    while(tmp1!=0){
        sokecuoi=tmp1%10;
        tmp1/=10;
        if(socuoi<sokecuoi){
            check=false;
            break;
        }
        else{
            socuoi=sokecuoi;
        }
    }
    if(check==true){
        printf("%d la so tang",n);
    }
}