// Mỗi sinh viên cần quản lý  ít nhất 2 thông tin: mã sinh viên và họ tên.
// Viết chương trình cho phép lựa chọn các chức năng:
// nhập danh sách sinh viên từ bàn phím rồi ghi lên tệp tin vd175.txt,
// đọc dữ liệu từ tệp tin vd175.txt rồi hiển thị danh sách lên màn hình,
// tìm kiếm họ tên của một sinh viên nào đó dựa vào mã sinh viên nhập từ bàn phím.

/*Ta nhận thấy rằng mỗi phần tử của tệp tin sinh vd175.txt là một cấu trúc có hai trường:
mã và họ tên. Do đó, ta cần khai báo cấu trúc này và sử dụng các hàm đọc/ghi tệp tin nhị phân
với kích thước mỗi phần tử của tệp tin là chính kích thước cấu trúc đó.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct{
    char Ma[10];
    char HoTen[40];
}SinhVien;

void WriteFile(char *FileName){
    FILE *f;
    int n,i;
    SinhVien sv;
    f=fopen(FileName,"ab");
    printf("Nhap bao nhieu sinh vien?");
    scanf("%d",&n);
    fflush(stdin);
    for(i=1; i<=n; i++){
        printf("Sinh vien thu %i\n",i);
        printf("-MSSV:");
        gets(sv.Ma);
        printf("-Ho ten:");
        gets(sv.HoTen);
        fwrite(&sv, sizeof(sv), 1, f); 
        fflush(stdin);
    }
    fclose(f);
    printf("Bam phim bat ky de tiep tuc");
    getch();
}

void ReadFile(char *FileName)  
{  
	FILE *f;   	
	SinhVien sv;   	
	f=fopen(FileName,"rb");   	
	printf(" MSSV | Ho va ten\n");   	
	fread(&sv,sizeof(sv),1,f);   	
	while (!feof(f))  
	{  
		printf(" %s  | %s\n",sv.Ma,sv.HoTen);  
		fread(&sv,sizeof(sv),1,f);  
	}  
	fclose(f);  
	printf("Bam phim bat ky de tiep tuc!!!");  
	getch();  
} 

void Search(char *FileName){
    char MSSV[10];
    FILE *f;
    int Found=0;
    SinhVien sv; 
    fflush(stdin);
    printf("Ma so sinh vien can tim:");
    gets(MSSV);
    f=fopen(FileName,"rb");
    while(!feof(f)&& Found==0){
        fread(&sv, sizeof(sv), 1, f);
        if(strcmp(sv.Ma, MSSV)==0)
        Found=1;
    }
    fclose(f);
    if(Found == 1)
    printf("Tim thay sinh vien co ma %s. Ho ten la: %s",sv.Ma, sv.HoTen);
    else
    printf("Tim khong thay sinh vien co ma %s", MSSV);
    printf("\nBam phim bat ky de tiep tuc!!!");
    getch();
}

int main(){
    int c;
    {
        printf("1. Nhap DSSV\n");
        printf("2. In DSSV\n");
        printf("3. Tim kiem\n");
        printf("4. Thoat\n");
        printf("Ban chon 1,2,3,4:");
        scanf("%d",&c);
        if(c==1)  
        { 
            WriteFile("vd175.txt");  
        } 
        else if (c==2)  
        { 
            ReadFile("vd175.txt");  
        } 
        else if (c==3) 
        {  
            Search("vd175.txt");  
        } 
    }
}