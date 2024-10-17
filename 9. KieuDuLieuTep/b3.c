// Viết chương trình nhập vào từ tệp văn bản songuyen.txt một dãy các số  nguyên hãy tạo ra các tệp:
// - prime.txt chứa các số nguyên tố có trong dãy
// - cp.txt chứa các số chính phương
// - dep.txt chứa các số đẹp (123, 222,...)
// - hoanhao.txt chứa các số hoàn hảo


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#define MAX 10000

int n=0;
int readA[MAX];

void docFILE()
{
    FILE *f; 
    f=fopen("b3songuyen.txt", "rt"); 
    if(f == NULL)
    {
        printf("\nFile Loi."); 
        exit(0); 
    }
 
    while(!feof(f))
    {
        fscanf(f,"%d", &readA[n]);
        n++;
    }

    fclose(f);
}

int nguyento(int n){
    int count=0;
    if(n>0){
        for(int i=1; i<n+1; i++){
        if(n%i==0){
            count+=1;
        }
    }
    if(count==2)
    return 1;
    }
}

int chinhphuong(int n){
    if(n>0){
        int a;
        a=sqrt(n);
        if(a*a==n&&n!=1)
        return 1;
        else 
        return 0;
    }
}

int hoanhao(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)
        return 1;
    else{
        return 0;
    }
}

int soDepTang(int n){
    int tmp1, tmp2, socuoi, sokecuoi;
    bool check= true;
    tmp1=n;
    socuoi=tmp1%10;
    tmp1/=10;
    if(n>100){
        while(tmp1!=0){
            sokecuoi=tmp1%10;
            tmp1/=10;
            if(socuoi<sokecuoi){
                check=false;
                break;
            }
            if(sokecuoi!=socuoi-1){
                check=false;
                break;
            }
            else{
                socuoi=sokecuoi;
            }
        }
        if(check==true){
            return 1;
        }
    }
}

int soDepGiong(int n){
    int tmp1, tmp2, socuoi, sokecuoi;
    bool check= true;
    tmp1=n;
    socuoi=tmp1%10;
    tmp1/=10;
    if(n>100){
        while(tmp1!=0){
            sokecuoi=tmp1%10;
            tmp1/=10;
            if(socuoi!=sokecuoi){
                check=false;
                break;
            }
            else{
                socuoi=sokecuoi;
            }
        }
        if(check==true){
            return 1;
        }
    }
}

int main(){
    FILE *f, *f1, *f2, *f3, *f4;
    docFILE();
    f=fopen("b3songuyen.txt","r");
    f1=fopen("b3prime.txt","w");
    f2=fopen("b3cp.txt","w");
    f3=fopen("b3dep.txt","w");
    f4=fopen("b3hoanhao.txt","w");


    fprintf(f1,"cac so nguyen to la:");
    for(int j=0; j<n; j++)
    {
        if(nguyento(readA[j])==1){
            fprintf(f1,"%d\t", readA[j]); 
        }
    }

    fprintf(f2,"cac so chinh phuong la:");
    for(int j=0; j<n; j++)
    {
        if(chinhphuong(readA[j])==true){
            fprintf(f2,"%d\t", readA[j]); 
        }
    }

    fprintf(f3,"cac so dep la:\t");
    for(int j=0; j<n; j++)
    {
        if(soDepTang(readA[j])==1||soDepGiong(readA[j])==1){
            fprintf(f3,"%d\t", readA[j]); 
        }
    }

    fprintf(f4,"cac so hoan hao la:");
    for(int j=0; j<n; j++)
    {
        if(hoanhao(readA[j])==1){
            fprintf(f4,"%d\t", readA[j]); 
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    fclose(f4);
}