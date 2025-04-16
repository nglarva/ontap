#include <stdio.h>

int main(){
    int sum = 0;
    int a = 0;
    FILE *fptr;
    fptr = fopen("numbers.txt","r");
    if(fptr != NULL){
        while (!feof(fptr))
        {
            fscanf(fptr,"%d", &a);
            sum += a;
        }

    }
    printf("Sum: %d\n",sum);


}