// Kiểm tra số nguyên tố
#include <stdio.h>
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


int main()
{
    int n  = 67;

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
    return 0;
}
