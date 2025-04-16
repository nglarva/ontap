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

int main(void){
    char chuoikitu[] = "       Hello      world        ";
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
     printf("Chuoi sau khi xoa \n");
    for(int i=0;chuoikitu[i] !='\0';i++){
        printf("chuoikitu[%d] = %c\n",i,chuoikitu[i]);
    }
}
