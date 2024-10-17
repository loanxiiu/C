// Viết chương trình tạo một file chứa các số nguyên có tên SONGUYEN.INP.
// Sau đó đọc file SONGUYEN.INP và ghi các số chẵn vào file SOCHAN.OUT và
// những số lẻ vào file SOLE.OUT.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10000
 
int a[MAX];
int readA[MAX];
void randomList100()
{
    for(int i = 0;i<MAX;i++) a[i] = rand();
}
void ghiFile()
{
    FILE *f; 
    f=fopen("b5SONGUYEN.INP.txt", "wt"); 
    if(f == NULL)
    {
        printf("\nLoi."); 
        exit(0); 
    }
 
    for(int j=0; j<MAX; j++)
    {
        if(j%10==0)     fprintf(f,"\n");
        fprintf(f, "%d\t", a[j]); 
    }
    fclose(f);
}
void docFILE()
{
    FILE *f; 
    f=fopen("b5SONGUYEN.INP.txt", "rt"); 
    if(f == NULL)
    {
        printf("\nFile Loi."); 
        exit(0); 
    }
 
    for(int j=0; j<MAX; j++)
    {
        fscanf(f, "%d", &readA[j]); 
    }
    fclose(f);
}
void luuChanLe()
{
    FILE *schan, *sle; 
    schan=fopen("b5SOCHAN.OUT.txt", "wt"); 
    sle=fopen("b5SOLE.OUT.txt", "wt"); 
    if(schan == NULL || sle == NULL)
    {
        printf("\nLoi."); 
        exit(0); 
    }
    for(int j=0; j<MAX; j++)
    {
        if(readA[j] % 2 == 0)
            fprintf(schan, "%d\t", readA[j]);
        else fprintf(sle, "%d\t", readA[j]);
    }
    fclose(schan);fclose(sle);
}
int main()
{
    randomList100();
    ghiFile();
    docFILE();
    luuChanLe();
    printf("HOAN THANH");
}