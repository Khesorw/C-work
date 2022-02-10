#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Hello.h"


 int numStudents = 0;
 char **studentID;



void init_stuTable();

int main(void){

    
  

   
    init_stuTable();


 


    return (0);
}





void init_stuTable(){


    /* garbage collector value: */
    int gcCollector;


 printf("Please enter the number of students: ");
    scanf("%d",&numStudents);






    /*allocate memory based on the userinput (number of students) */
    studentID = (char **)calloc(numStudents,sizeof(char*));

   
   char clearBuff;
   while(clearBuff=getchar() != '\n');

    
    char buffer[6];
    for(int i = 0; i < numStudents; i++){
        printf("Enter the id of student %d: ",(i+1));
        scanf("%5[^\n]s",buffer);
         while(clearBuff=getchar() != '\n');
        studentID[i] = strndup(buffer,5);
      

    }


    for(int i = 0; i < numStudents; i++){

        printf("%s\n",studentID[i]);
    }


}/*init_stuTable() */