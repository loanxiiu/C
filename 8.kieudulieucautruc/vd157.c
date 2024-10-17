#include<stdio.h>
#include<conio.h>
#include<math.h>
typedef struct 
{
    float thuc;
    float ao;
} SoPhuc;

void InSoPhuc(SoPhuc p){
    printf("%.2f+i%.2f\n",p.thuc,p.ao);
}
int main(){
    SoPhuc p1,p2,p;
    printf("Nhap so phuc thu nhat:\n");
    printf("Phan thuc:");
    scanf("%f",&p1.thuc);
    printf("Phan ao:");
    scanf("%f",&p1.ao);
    printf("Nhap so phuc thu hai:\n");
    printf("Phan thuc:");
    scanf("%f",&p2.thuc);
    printf("Phan ao:");
    scanf("%f",&p2.ao);
    printf("So phuc thu nhat:");
    InSoPhuc(p1);
    printf("So phuc thu hai:");
    InSoPhuc(p2);
    p.thuc=p1.thuc+p2.thuc;
    p.ao=p1.ao+p2.ao;
    printf("Tong 2 so phuc:");
    InSoPhuc(p);
    getch();
}