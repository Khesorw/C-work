#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[]){


     int num,x;
    char buffer[50];

    printf("Input the nuberm ");
    scanf("%49d",&num);
    if(num < 0){
        num = num * -1;
    }
    sprintf(buffer,"%d",num);
    printf("Number of digits are: %llu\n",strlen(buffer));



    return(0);
}