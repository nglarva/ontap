#include <stdio.h>

int kiemTraSNT()
{
    int n;
    scanf("%d", &n);
    if (n < 1)
    {
        printf("%d khong phai so nguyen to", n);
        return 0;
    }
    else if (n == 2 || n == 3)
    {
        printf("%d la so nguyen to", n);
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d khong phai so nguyen to\n", n);
                return 0;
            }
        }
        printf("%d la so nguyen to", n);
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("%d khong phai so nguyen to", n);
        return 0;
    }
    else if (n == 2 || n == 3)
    {
        printf("%d la so nguyen to", n);
        return 0;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d khong phai so nguyen to\n", n);
                return 0;
            }
        }
        printf("%d la so nguyen to", n);
    }
    return 0;
}