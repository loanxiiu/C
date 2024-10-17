#include<stdio.h>
int main(){
    float a[2][3], *pa;
    for( int i=0; i<6; ++i){
        printf("nhap phan tu %d:",i);
        scanf("%f",(float*)a+i);
    }
    for( int i=0; i<2; ++i){
        for( int j=0; j<3; ++j){
            printf("%3.0f",a[i][j]);
        }
        printf("\n");
    }
}