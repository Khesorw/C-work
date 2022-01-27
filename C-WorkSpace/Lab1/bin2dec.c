#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @brief This program takes decimal numbers and convert its equivalent base 2
 * @author Hasib Yosufi
 * 
 * Professor: Surbhi Bahri
 * Due date: Jan/23/2022
 * 
 * 
 * @return int 
 */
int main(int argv, char* argc[])
{



int binary = 0,temp; //binary reads from user temp is for printf actual user input

    unsigned int decimal = 0; // decimal equivalent of base 2
    int toPower = 0; //is use for binary calcualtion get each base to power of n
    printf("Enter binary number: ");
    scanf("%d",&binary);
    temp = binary;


    while(binary != 0){
        int getBase = binary % 10; //get reminder of binary divide by 10 bcz base 10 get reminder 
        decimal += (getBase*pow(2,toPower)); //get actual decimal value of 1s and 0s base to the power n
        binary /= 10;
        toPower++;


    }

    printf("The decimal equivalen of %d is %d\n",temp,decimal);






    return(0);
}