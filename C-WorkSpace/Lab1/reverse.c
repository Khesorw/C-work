#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * @brief this program read input number from user and print them in reverse 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char* argv[]){

    //num to save user input x to show the original form
     int num,x;  

     //is used to hold string value of decimal num
    char buffer[50];

    printf("Input the nuberm ");

    //buffer size 49 so 1 extra space to terminate strigl
    scanf("%49d",&num); 

    if(num < 0){        //if value is less than one eleminate the minus sign

        num = num * -1;
    }
    sprintf(buffer,"%d",num); //converts integers into character buffer

    printf("The reverse number is: ");//prints the string in reverse
     for(x=strlen(buffer)-1;x >= 0;x--){
        printf("%c",buffer[x]);
    }
    puts("");


    return(0);
}