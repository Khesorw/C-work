#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>




int main(void)


{





    //message to encrypt
    char*  p_msgToEnc;


    p_msgToEnc = (char *)calloc(65,sizeof(char)); //allocates 65 bytes of memory size char

    //checks for the momory r
    if(p_msgToEnc == NULL){


        puts("Error..cannot allocate memory!");

        exit(EXIT_FAILURE);
    }

    printf("Please enter the message to encrypt: ");

    fgets(p_msgToEnc,65,stdin);



    //removes the new line created by  fgets()
    p_msgToEnc[strlen(p_msgToEnc)-1] = 0;

    //
    int *rotation,clctGarbg;


    //allocates memory for rotation sizeof(int)4,2,8 depends on the cpu
    rotation = (int *)malloc(sizeof(int));


    printf("Please enter the rotation key: ");

    //reads rotation key from the user hopefully btw 0 to 26
    scanf("%d",rotation);




    //checks the rotation number to not get bigger than 26
    if(*rotation > 26){
        *rotation = -1;

        }


    //iterate until the user input valid input 0 to 26
    while(!(*rotation > -1) && ! (*rotation > 26)  ){

        clctGarbg = 0;//to collect the garbage value from the input buffer

        printf("Error...Key must be 1 to 26\ntry again: ");


        //iterate until the input buffer reches to its end
        while(clctGarbg != EOF && clctGarbg != '\n'){

            //becacuse input buffer is stream oriented clcGarbge reads all its char from the buffer
            clctGarbg = getchar();
        }


        //read from user after invalid input
        scanf("%d",rotation);


        if(*rotation > 26){
        *rotation = -1;

        }

    }






    int len = strlen(p_msgToEnc), i = 0;


    // iterate through all the indexes encrypt the message by adding rotaion key to the ascii value of each char
   for(; i < len; i++){

    //len act as offset not to move the pointer
    *(p_msgToEnc+i ) += *rotation; //adds the rotaion key

   }



   printf("%s\n",p_msgToEnc);

   //free the p_msgToEnc buffer
   free(p_msgToEnc);
   free(rotation);



    return(EXIT_SUCCESS);
}