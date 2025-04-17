#include <stdio.h>

int main(){
    int sum = 0;
    int n;
    int a,b = 0;
    FILE *fptr;

    // fptr = fopen("numbers.txt","w");
    // printf("Nhap so n: ");
    // scanf("%d", &n);
    // if(fptr != NULL){
    //     for(int i = 0; i < n; i++){
    //         printf("Nhap gia tri %d: ",i+1);
    //         scanf("%d",&a);
    //         fprintf(fptr,"%d ",a);
    //     }

    // }
    // fclose(fptr);

    fptr = fopen("numbers.txt","r");
    // while(!feof(fptr)){
    //     fscanf(fptr,"%d",&b);
    //     if(!feof(fptr)) sum+=b;
    // }
    while(fscanf(fptr,"%d",&b) != -1){
        sum+=b;
    }
    fclose(fptr);

    printf("Sum: %d\n",sum);
}