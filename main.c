#include <stdio.h>
#include <string.h>
/*
// Kiểm tra số nguyên tố

#include <stdbool.h>
#include <math.h>

int n = 29;
bool laSoNguyenTo = true;

void kiemTraSNT(int n){
    if (n < 2 || n % 2 == 0)
    {
        laSoNguyenTo = false;
    }
    else
    {
        for (int i = 3; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                laSoNguyenTo = false;
                break;
            }
        }
        if (laSoNguyenTo == true)
        {
            printf("%d la so nguyen to\n", n);
        }
        else {
            printf("%d khong la so nguyen to\n", n);
        }
    }
}

int kiemTraSNT2(int n){
    if (n < 2)
    {
        printf("%d khong phai la so nguyen to\n",n);
    }
    else
    {
        for (int i = 2; i < n/2; i++)
        {
            if (n % i == 0)
            {
                printf("%d khong phai la so nguyen to\n",n);
                return 0;
            }
        }
    }
    printf("%d la so nguyen to\n",n);
    return 1;    

}*/
void tinhTongCS(int n){
    int sum=0;
    printf("nhap so nguyen :");
    scanf("%d", &n);
    // while (n>0){
    //     sum += n % 10;
    //     n = n / 10;
    // }
    for(;n > 0;n /= 10){
        printf("%d\n", n);
        sum += n % 10;
    }
    printf("tong %d\n", sum);

}
int main(){
    char str[] = "   Hello";
    int i = 0;
    for(int i = 0; i< strlen(str);i++){
        if(str[0] == 32){
            str[i] = str[i+1];
        }
    }
    
    return 0;
}
