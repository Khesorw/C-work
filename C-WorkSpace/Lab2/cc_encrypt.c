#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



/**
 * @brief This program reads message and rotation key from the user
 *        validate the rotation key and encrypt the message
 * 
 * @return int 
 * 
 * @author Hasibullah Yosufi
 * 
 * Due date: Feb/6th/2022
 * 
 * Assessment: lab2
 */


int main(void)


{





    /* message to encrypt */
    char*  p_msgToEnc;


    /*allocates 65 bytes of memory size char */
    p_msgToEnc = (char *)calloc(81,sizeof(char)); 

    /* checks if the requested memory is allocated */
    if(p_msgToEnc == NULL){


        puts("Error..cannot allocate memory!");

        
        exit(EXIT_FAILURE);
    }

    printf("Please enter the message to encrypt: ");

  /*reads the message from the user to encrypt */
  int scanRet = scanf("%79[^\n]c", p_msgToEnc);


    /*Clear if buffer overflow happen */
	char clearBuff;
	while (clearBuff = getchar() != '\n');



   

    /* rotation key and dummy value collector */
    int *rotation,clctGarbg;


    /*allocates memory for rotation sizeof(int)4,2,8 depends on the cpu */
    rotation = (int *)malloc(sizeof(int));


    printf("Please enter the rotation key: ");

    /*reads rotation key from the user hopefully btw 0 to 26 */
    scanf("%d",rotation);




    /* checks the rotation number to not get bigger than 26 */
    if(*rotation > 26){
        *rotation = -1;

        }


    /* iterate until the user input valid input 0 to 26 */
    while(!(*rotation > -1) && ! (*rotation > 26)  ){

        /*to collect the garbage value from the input buffer */
        clctGarbg = 0;

        printf("Error...Key must be 0 to 26\ntry again: ");


        /* iterate until the input buffer reches to its end */
        while(clctGarbg != EOF && clctGarbg != '\n'){

            /* becacuse input buffer is stream oriented clcGarbge reads all its char from the buffer */
            clctGarbg = getchar();
        }


        /* read from user after invalid input */
        scanf("%d",rotation);

        /*if rotation is bigger than 26 then throw exception*/

        if(*rotation > 26){
        *rotation = -1;

        }

    }





    /*len gets the length of user input and itearte through all the elements to encrypt each char */
    int len = strlen(p_msgToEnc), i = 0;


    /* iterate through all the indexes encrypt the message by adding rotaion key to the ascii value of each char */
   for(; i < len; i++){

    /* len act as offset not to move the pointer */
    *(p_msgToEnc+i ) += *rotation; 

   }


    /* prints encrypted message */
   printf("%s\n",p_msgToEnc);

   /* free the p_msgToEnc buffer */
   free(p_msgToEnc);
   free(rotation);



    return(EXIT_SUCCESS);
}