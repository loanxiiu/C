// Viết chương trình nhập số nguyên dương n gồm k chữ số (0< k<= 9) sắp xếp các chữ số của n theo thứ tự giảm giần

#include<stdio.h>
int sapxep(int *n){
    int a[100], tmp, k=0;
    int tem=*n, tam=*n;
    while(tem>0){
            if(tem%10){
                k++;
            }
            tmp=tem/10;
            tem=tmp;
    }
    for(int i=0; i<k; i++){
        a[i]=tam%10;
        tam=tam/10;
    }

    int tg=a[0];
    for(int i = 0; i < k-1; i++){
        for(int j = i+1; j < k; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg; } }}   

    printf("so giam dan la:");             
    for(int i = 0; i < k; i++){
        printf("%d", a[i]);
    } 

}
int main(){
    int n; 
    do{
        printf("Nhap n:");
        scanf("%d",&n);
        if(0>=n || n>999999999){
            printf("Vui long nhap lai!\n");
        }
    }
    while(0>=n || n>999999999);
    sapxep(&n);
}