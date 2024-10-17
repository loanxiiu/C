//  Tìm giá trị lớn nhất/ nhỏ nhất. Lớn thứ 2, nhỏ thứ 2 trong mảng

#include<stdio.h>
int swap(int *a, int *b){
    int tg = *a;
    *a = *b;
    *b = tg;
}
 
void SapXep(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                swap(&a[i], &a[j]);
            }
        }        
    }
}

int solonthu1(int a[], int n){
    SapXep(a, n);
    return a[0];
}

int solonthu2(int a[], int n){
    SapXep(a, n);
    return a[1];
}

int sonhothu1(int a[], int n){
    SapXep(a, n);
    return a[n-1];
}

int sonhothu2(int a[], int n){
    SapXep(a, n);
    return a[n-2];
}

int main(){
    int n, a[100];
    printf("Nhap n:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("\nNhap a[%d]:",i);
        scanf("%d",(a+i));
    }
    printf("\nSo lon thu 1 la %d", solonthu1(a, n));
    printf("\nSo lon thu 2 la %d", solonthu2(a, n));
    printf("\nSo nho thu 1 la %d", sonhothu1(a, n));
    printf("\nSo nho thu 2 la %d", sonhothu2(a, n));
}