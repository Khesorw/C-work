#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define RANGE 100

/**
 * @brief This program print the multiples of 3 5 and 15
 * @author Hasib Yosufi
 * 
 * Professor: Surbhi Bahri
 * Due date: Jan/23/2022
 * 
 * 
 * @return int 
 */

int main(){



    //iterate from 0 to 100 prints multiple of 3 5 15

       for(int i=1;i<=RANGE;i++)
   {
       if(i%3 != 0 && i%5 != 0){ //checkcs the numbers that are not multiple of and 5 and prints them prevent duplicate
        printf("%d\n",i);
       }
       if((i%3==0) && (i%5==0)){ //prints multiple of 3 and 5 first 

        printf("%d is multiple of 3 and 5\n",i);
       }
       else if(i%3==0){    //prints multiple of 3

        printf("%d is multiple of 3\n",i);
       }
       else if(i%5==0){  //prints multiple of 5

        printf("%d is multiple of 5\n",i);
       }

   }

    return(0);
}