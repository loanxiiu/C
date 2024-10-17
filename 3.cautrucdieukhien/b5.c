// Nhập 4 số nguyên a, b, c, d. Tìm số có giá trị nhỏ nhất

#include<stdio.h>
int main(){
    int a, b, c, d, max1, max2, max;
    scanf("%d %d %d %d",&a,&b,&c,&d);
         max1=a;

     max2=c;

     if(a<b)

        max1=b;

                            

     if(c<d)

       max2=d;

      

    max=max1;

    if(max2>max1)

            max=max2;

     printf("So lon nhat trong 4 so la: %d", max);
}