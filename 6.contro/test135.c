#include<stdio.h>
double fmax(double x, double y){
    return(x>y ? x:y);
//     if (x>y)
//     return x;
// else
//     return y;
}
double (*pf)(double,double)=fmax;
int main (){
    printf("\n max=%f",pf(5.0,9.6));
}


// #include<stdio.h>
// double fmax(double x, double y){
//     return(x>y ? x:y);
// }
// double (*pf)(double,double);
// int main (){
//     pf=fmax;
//     printf("\n max=%f",pf(5.0,9.6));
// }