#include<stdio.h>
#include<conio.h>
typedef struct 
{
    unsigned char Ngay;
    unsigned char Thang;
    unsigned int Nam;
} NgayThang;
int main(){
    NgayThang Ng={29,8,1986};
    NgayThang *p;
    p=&Ng;
    printf("Truy cap binh thuong %d-%d-%d\n",Ng.Ngay,Ng.Thang,Ng.Nam);
    printf("truy cap qua con tro %d-%d-%d\n",p->Ngay,p->Thang,p->Nam);
    printf("Truy cap vung nho con tro %d-%d-%d\n",(*p).Ngay,(*p).Thang,(*p).Nam);
    getch();
}
