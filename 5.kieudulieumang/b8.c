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
int tichhaimatran(int m, int k, int n, int a[][100], int b[][100]){
    int c[100][100];
    int i, j, e;
     for(i=0;i<m;i++) 
        for(j=0;j<n;j++) {
         int tt=0;
           for(e=0;e<k;e++)
               {
                  tt = tt + (a[i][e] * b[e][j]); //Công thức tính C[i][j]
                }
            c[i][j] = tt;
    }
  printf("tich 2 ma tran AxB:\n");
  XuatMaTran(m,n,c);
}
int main(){
    int n, m, k, a[100][100], b[100][100];
    printf("nhap m, k va n:");
    scanf("%d %d %d",&m, &k, &n);
    NhapMaTran(m,k,a);
    XuatMaTran(m,k,a);
    NhapMaTran(k,n,b);
    XuatMaTran(k,n,b);
    tichhaimatran(m,k,n,a,b);
}