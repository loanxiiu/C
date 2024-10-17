#include<stdio.h>
void NhapMaTran( int m, int n, int a[][100])
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
}
 
void XuatMaTran(int m, int n, int a[][100])
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }
}
int timx(int m, int n, int a[][100]){
   int x, dem=0;
   printf("nhap x:");
   scanf("%d",&x);
   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
         if(a[i][j]==x){
            dem+=1;
            printf("\nx xuat hien o A[%d][%d]",i,j);
         }
      }
   }  
   printf("\nso lan xuat hien cua x la %d",dem);
}
int matranchuyenvi(int m, int n, int a[][100]){
   int temp;
      for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         temp = a[i][j];
         a[i][j] = a[j][i];
         a[j][i] = temp;
      }
   }

   printf("\nMa tran chuyen vi cua ma tran da cho la:\n");
   for (int i = 0; i < n; i++) {
      printf("\n");
      for (int j = 0; j < m; j++) {
         printf("%d\t", a[i][j]);
      }
   }
}
int main(){
    int n, m, a[100][100];
    printf("nhap m va n:");
    scanf("%d %d",&m, &n);
    NhapMaTran(m,n,a);
    XuatMaTran(m,n,a);
    matranchuyenvi(m,n,a);
}