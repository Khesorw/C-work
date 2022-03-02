#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Hello.h"
#include "Hello.c"





int main(void){

 

  init_stuTable();
    init_courseTable();
    init_regTable();












   
   int userInput,gbCollct,condi = 1, valid_Input = 0;
    
   while(condi){
       print_Menu();
       valid_Input = scanf("%d",&userInput);
      
     
       if(userInput < 1 || userInput > 4){
           valid_Input = 0;
       }

       while(valid_Input != 1 )
       {
           gbCollct = 0;

           printf("Error: unown action: 5\nTry again...\n");
            while ((gbCollct=getchar()) != '\n');
           print_Menu();
            valid_Input = scanf("%1d",&userInput); 
            if(userInput < 1 || userInput > 4)
            {
             valid_Input = 0;
            } 
       }

       switch (userInput)
       {
       case 1:
           registerStudent();
           break;
        case 2:
            dropStudent();
            break;

        case 3:
            print_regisTable();
            break;
        
       
       default:
           condi = 0;
           if(studentID != NULL)
           {
            freeAll();
           }
          
           exit(EXIT_SUCCESS);
       }


   }/*while()*/





 return (0);
}/* main() */







