#include<stdio.h>
int main(){
    float a[2][3], tg;
    int i,j;
    for( i=0; i<2; ++i){
        for( j=0; j<3; ++j){
            printf("\na[%d][%d]=",i,j);
            scanf("%f",&tg);
            a[i][j]=tg;
        }
    }
    printf("\n");

    for( i=0; i<2; ++i){
        for( j=0; j<3; ++j){
            printf("%8.2f",a[i][j]);
        }
        printf("\n");
    }
}