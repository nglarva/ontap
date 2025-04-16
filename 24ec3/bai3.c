#include<stdio.h>
typedef struct sinhvien{
    int masv;
    char hoten[200];
    float diemTB;
} SinhVien;//Alias

int main(){
    int n;
    printf("nhap so sinh vien\n");
    scanf("%d", &n);

    SinhVien dsSinhVien[n];
    for(int i=0;i< n;i++){
        
    }
    printf("so sinh vien la: %d", n);
    return 0;
}