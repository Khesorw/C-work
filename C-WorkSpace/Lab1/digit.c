#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * @brief  This program read input from user and prints the number of digits
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main(int argc, char* argv[]){


     int num,x;        //num is used to read from user and save it into num

    char buffer[50];  //string buffer to convert to hold integers as string 

    printf("Input the nuberm ");
    scanf("%49d",&num);

    if(num < 0){ //if num is negative (-) it will negate the number to digard the - parts
        num = num * -1;
    }
    sprintf(buffer,"%d",num);   //convert number into string

    printf("Number of digits are: %llu\n",strlen(buffer));//print



    return(0);
}