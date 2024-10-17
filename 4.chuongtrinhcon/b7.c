#include<stdio.h>
int giaithua(int n){
   int i;
   long giai_thua = 1;
   if (n == 0 || n == 1) {
      return giai_thua;
   }
   else {
      for (i = 2; i <= n; i++) {
         giai_thua *= i;
      }
      return giai_thua;
   }
}
int tohop(int k, int n){
    int ckn=giaithua(n)/(giaithua(k)*giaithua(n-k));
    return ckn;
}
int main(){
    int n, k;
    printf("nhap k, n:");
    scanf("%d %d",&k,&n);
    printf("to hop chap %d cua %d la %d",k,n,tohop(k,n));
}