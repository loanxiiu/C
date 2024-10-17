#include<stdio.h>
int sodao(int n){
    int x, tmp;
    int sodao=0;
    tmp=n;
        while(tmp>0){
        x=tmp%10;
        sodao=sodao*10+x;
        tmp=tmp/10;
    }
        return sodao;
}
int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    printf("%d la so dao",sodao(n));

}