// Cho hai tệp So1.txt và So2.txt chứa các số nguyên
// - Sắp xếp theo chiều tăng dần các số trong 2 tệp
// - Tạo tệp So3.txt gồm các số trong cả 2 tệp trên và cũng được sắp xếp theo thứ tự tăng dần

#include<stdio.h>
#include<stdlib.h>
#define MAX 10000

int n=0;
int readA[MAX];

void docFILE()
{
    FILE *f1, *f2, *f3; 
    f1=fopen("b4So1.txt", "rt");
    f2=fopen("b4So2.txt", "rt"); 
    if(f1 == NULL)
    {
        printf("\nFile Loi."); 
        exit(0); 
    }
 
    while(!feof(f1))
    {
        fscanf(f1,"%d", &readA[n]);
        n++;
    }
    while(!feof(f2))
    {
        fscanf(f2,"%d", &readA[n]);
        n++;
    }

    fclose(f1);
    fclose(f2);
}

int mangtang(int readA[], FILE *f){ 
    int i,j;
    int tg=readA[0];
   for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(readA[i] > readA[j]){
                tg = readA[i];
                readA[i] = readA[j];
                readA[j] = tg;
            }
        }
    }  
    for(int i = 0; i < n; i++){
        if(readA[i]!=readA[i-1]){
            printf("%d\t", readA[i]);
        }
    }
      
    for(int i = 0; i < n; i++){
        if(readA[i]!=readA[i-1]){
            fprintf(f,"%d\t", readA[i]);
        }
    }  
}

int main(){
    docFILE();
    FILE *f1, *f2, *f3; 
    f1=fopen("b4So1.txt", "rt");
    f2=fopen("b4So2.txt", "rt"); 
    f3=fopen("b4So3.txt", "wt"); 
    mangtang(readA, f3);
    
}