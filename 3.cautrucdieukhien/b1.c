// Nhập một số bất kì. Hãy đọc giá trị của số nguyên đó nếu nó có giá trị từ 1-9, ngược lại thông báo không đọc được

#include<stdio.h>
void main(){
    int n;
    printf("Nhap so nguyen n:");
    scanf("%d",&n);
    switch(n){
    case 1: printf("Mot");break;
    case 2: printf("Hai");break;
    case 3: printf("Ba");break;
    case 4: printf("Bon");break;
    case 5: printf("Nam");break;
    case 6: printf("Sau");break;
    case 7: printf("Bay");break;
    case 8: printf("Tam");break;
    case 9: printf("Chin");break;
    default:
    printf("Khong doc duoc!");
    }
}