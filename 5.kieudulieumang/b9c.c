#include<stdio.h>
#include<math.h>
void nhapmang(int n,int a[][100]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("nhap a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void xuatmang(int n,int a[][100]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int chinhphuong(int n){
    if(n>0){
        int a;
        a=sqrt(n);
        if(a*a==n)
        return 1;
        else 
        return 0;
    }
}

int sophantulasochinhphuongtrongmatrantamgiacduoicoduongcheochinh(int n, int a[][100]){
   int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i>=j && chinhphuong(a[i][j])==1)
                count++;
        }
    } 
    printf("so phan tu la so chinh phuong trong ma tran tam giac duoi co duong cheo chinh la: %d",count);
}

int phantuyenngua(int n, int a[][100]){
    int i, j, max, min, col;
    printf("\nPhan tu yen ngua la:");
    for (i = 0; i < n; i++)
    {
        max = a[n][0];
        col = 0;
        for (j = 1; j < n; j++)
        {
            // Find maximum in a row
            if (max < a[i][j])
            {
                max = a[i][j];
                col = j;
            }
        }
 
        // Find minimum in a column col
        min = a[0][col];
        for (int i = 1; i < n; i++)
        {
            if (min > a[i][col])
            {
                min = a[i][col];
            }
        }
 
        // Compare maximum in row and minimm in column
        if (max == min)
        {
            printf("%d\t",max);
        }
    }
}

int sophantulasochinhphuongtrongmatrantamgiacduoikhongcoduongcheochinh(int n, int a[][100]){
   int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i>j && chinhphuong(a[i][j])==1)
                count++;
        }
    } 
    printf("\nso phan tu la so chinh phuong trong ma tran tam giac duoi khong co duong cheo chinh la: %d",count);
}

int main(){
    int n, a[100][100];
    printf("nhap n:");
    scanf("%d",&n);
    nhapmang(n,a);
    xuatmang(n,a);
    sophantulasochinhphuongtrongmatrantamgiacduoicoduongcheochinh(n,a);
    sophantulasochinhphuongtrongmatrantamgiacduoikhongcoduongcheochinh(n,a);
    phantuyenngua(n,a);
}