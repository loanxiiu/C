// MẢNG ĐIỂM 
// nhập xuất n điểm 
// đếm số lượng điểm có hoành độ dương
// tìm điểm có hoành độ lớn nhất nhỏ nhất
// tìm điểm gần gốc tọa độ nhất

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct DIEM{
    int Ox;
    int Oy;
}diem;

void nhapDiem(struct DIEM *x){
    printf("nhap Ox:");
    scanf("%d",&x->Ox);
    printf("nhap Oy:");
    scanf("%d",&x->Oy);
}

void xuatDiem(struct DIEM x){
    printf("(%d,%d)\t",x.Ox, x.Oy);
}

int nhapMang(struct DIEM a[], int n){
    for(int i=0; i<n; i++){
        nhapDiem(&a[i]);
    }
}

void locDiemTrung(struct DIEM a[], int *n){
    int count=0;
	for (int i = 0; i < *n; i++)
	{
        // printf("\n\tfor  i,n:%d ,%d,  (%d,%d)", i,n,a->Ox,a->Oy);
		for (int j =i+1; j < *n; j++)
		{
			if (j!=i&&a[i].Ox==a[j].Ox&&a[i].Oy==a[j].Oy)
			{
                count++;
				for (int k = i; k < *n; k++) 
				{
					a[k].Ox = a[k + 1].Ox;
                    a[k].Oy = a[k + 1].Oy;
                    // printf("\nfor i,n:%d ,%d,  (%d,%d)", i,n,a->Ox,a->Oy);
				}
                    (*n)--;
					i--;
                
			}
		}
	}
    printf("\nmang sau khi xoa la:\n");
	for (int i = 0; i < *n; i++) 
	{
		xuatDiem(a[i]);
	}
}

void XuatMang(struct DIEM a[], int n){
    for(int i=0; i<n; i++){
        xuatDiem(a[i]);
    }
}

int hoanhDoDuong(struct DIEM a[], int *n){
    int count=0;
    for(int i=0; i<*n; i++){
        if(a[i].Ox>0){
            count++;
        }
    }
    return count;
}

int hoanhDoNhoNhat(struct DIEM a[], int n){
    int min=a[0].Ox;
    for(int i=1; i<n; i++){
        if(min>a[i].Ox){
            min=a[i].Ox;
        }
    }
    for(int i=0; i<n; i++){
        if(min==a[i].Ox){
            xuatDiem(a[i]);
        }
    }
}

void hoanhDoLonNhat(struct DIEM a[], int n){
    int max=a[0].Ox;
    for(int i=1; i<n; i++){
        if(max<a[i].Ox){
            max=a[i].Ox;
        }
    }
    for(int i=0; i<n; i++){
        if(max==a[i].Ox){
            xuatDiem(a[i]);
        }
    }
}

void diemGanGocToaDoNhat(struct DIEM a[], int n){
    diem min=a[0];
    for(int j=1; j<n; j++){
        if(sqrt(pow(min.Ox,2)+pow(min.Oy,2))>sqrt(pow(a[j].Ox,2)+pow(a[j].Oy,2))){
            min=a[j];
        }
    }
    xuatDiem(min);
}

int main(){
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    struct DIEM a[n];
    nhapMang(a,n);
    XuatMang(a,n);
    locDiemTrung(a,&n);
    printf("\n");
    printf("\nso diem co hoanh do duong:%d",hoanhDoDuong(a,&n));
    printf("\nDiem co hoanh do nho nhat:");
    hoanhDoNhoNhat(a,n);
    printf("\nDiem co hoanh do lon nhat:");
    hoanhDoLonNhat(a,n);
    printf("\n");
    printf("Diem gan goc toa do nhat:");
    diemGanGocToaDoNhat(a,n);
}