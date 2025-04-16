 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>
// void xoaKituDC(char chuoikitu[100]){
//     for (int i = 0; chuoikitu[i] != '\0'; i++)
//     {
//         if (chuoikitu[0] == ' ')
//         {
//             j = i;
//             for (i; chuoikitu[i] != '\0'; i++)
//             {
//                 chuoikitu[i] = chuoikitu[i + 1];
//             }
//             i = j-1;
//         }
//     }

//     do
//     {
//         chuoikitu[strlen(chuoikitu)-1]='\0';
//     } while (chuoikitu[strlen(chuoikitu)-1]==' ');
    
// }
// void xoaKiTuDC1(){
//     char chuoikitu[1000]="          hellO   World    ";
//     int j;
//     int dai = strlen(chuoikitu);
//     int dau = 0, cuoi = dai-1;
//     while(chuoikitu[dau] == ' '){
//         dau++;
//     }
//     while(chuoikitu[cuoi] == ' '){
//         cuoi--;
//     }
//     if(dau>0){
//         for(int i = 0; i<= cuoi - dau; i++)
//         {
//             chuoikitu[i] = chuoikitu[i + dau];
//         }
//         chuoikitu[cuoi] = '\0';
//     }
    
//     //scanf("%99s", chuoikitu);
//     // for(int i=0;i<= strlen(chuoikitu);i++){
//     //   if(chuoikitu[i] != 32){
//     //         printf("%c",chuoikitu[i]);
//     //     }
        
//     // }
    

//     int countUpperCase = 0;
//     for (int i = 0; i < strlen(chuoikitu); i++)
//     {

//         //if(chuoikitu[i] > 64 && chuoikitu[i] < 91)
//         if(isupper(chuoikitu[i])){
//             countUpperCase++;
//             printf("%c\t",chuoikitu[i]);
//         }
//         printf ("%d\n",chuoikitu[i]);
//     }
//     printf("So ki tu hoa la: %d", countUpperCase);
// }

void xoaKTDauCuoi(){
    char chuoikitu[] = "       Hello      World        ";
    int upcount=0;
    printf("Chuoi truoc khi xoa khoang trang o dau\n");
    for(int i=0;chuoikitu[i] !='\0';i++){
        printf("chuoikitu[%d] = %c\n",i,chuoikitu[i]);
    }
    while(chuoikitu[0] == ' ')
    {
        for(int i=0;chuoikitu[i] !='\0';i++){
            chuoikitu[i] = chuoikitu[i+1];
         }
        printf("Length: %d\n",strlen(chuoikitu));
     }
    while(chuoikitu[strlen(chuoikitu)-1] == ' '){
        chuoikitu[strlen(chuoikitu)-1] = '\0';
    }
    for (int i=0; i<strlen(chuoikitu); i++){
        if(isupper(chuoikitu[i])){
            upcount++;
        }
    }
     printf("Chuoi sau khi xoa \n");
    for(int i=0;chuoikitu[i] !='\0';i++){
        printf("chuoikitu[%d] = %c\n",i,chuoikitu[i]);
    }
    printf("so ki tu viet hoa: %d",upcount);
}
typedef struct SinhVien{
    int MaSV;
    char HoTen[30];
    float DiemTB;
    } SV; //alias

int main(void){
    int n;
    
    SV sv1={1,"Manh Hung",4.5};

    printf("MaSV: %d\nHo ten: %s\nDiemTB: %.2f",sv1.MaSV,sv1.HoTen,sv1.DiemTB);

    SV sv2;
    SV dsSV[100];

//     printf("Nhap maSV: ");
//     scanf("%d", &sv2.MaSV);
//     printf("\nNhap ho ten: ");
//     //scanf("%s", sv2.HoTen);
//     getchar();
//     fgets(sv2.HoTen,30,stdin);
//     printf("\nNhap diem trung binh: ");
//     scanf("%f", &sv2.DiemTB);

//     printf("MaSV: %d\nHo ten: %s\nDiemTB: %.2f",sv2.MaSV,sv2.HoTen,sv2.DiemTB);
    
    
    
//     return 0;
// }
printf("Nhap so luong sinh vien");
scanf("%d", &n);
for(int i = 0; i < n; i++){
    printf("Nhap maSV: ");
    scanf("%d", &dsSV[i].MaSV);
    printf("Nhap ho ten: ");
    getchar();
    fgets(dsSV[i].HoTen,30,stdin);
    dsSV[i].HoTen[strcspn(dsSV[i].HoTen,"\n")] = '\0';
    printf("Nhap diem trung binh: ");
    scanf("%f", &dsSV[i].DiemTB);
}
printf("Danh sach sinh vien\n");
for(int i= 0; i<n; i++){
    printf("%d, %s, %f\n", dsSV[i].MaSV, dsSV[i].HoTen, dsSV[i].DiemTB);
}
}
