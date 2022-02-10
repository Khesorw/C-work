#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Hello.h"


 int numStudents;
 char **studentID;

 int numCourses;
 char **courses;

int** studentsTable;


void init_stuTable();
void freeAll();
void init_courseTable();
void init_regTable();
void print_Menu();
void print_regisTable();
void registerStudent(void);


int main(void){
 
  init_stuTable();

  init_courseTable();

  /*initialize registration table: */
  init_regTable();


    int userInput,gbCollector, valid_int;

    while(1){

        printf("Please choose one of the following actions\n");
        print_Menu();
        valid_int = scanf("%1d",&userInput);

        switch (userInput)
        {
        case 1:
        printf("Please enter the student ID: ");

            break;
        
        default:
            break;
        }
    }

    
  














   
 
 



 return (0);
}/* main() */







/* initialize student id table: */
void init_stuTable(){


    /* garbage collector value: */
    int gcCollector,inputValid=0;


 printf("Please enter the number of students: ");
   inputValid = scanf("%d",&numStudents);
  // while((gcCollector=getchar())!= '\n');

    while (inputValid < 1 || numStudents == 0)
    {
        gcCollector = 0;
        printf("Error...numstudent should be number: ");
        while (gcCollector != EOF && gcCollector != '\n') {
			gcCollector = getchar();
		}
      inputValid = scanf("%d",&numStudents);
    }
    



    /* allocate memory based on the userinput (number of students) */
    studentID = (char **)calloc(numStudents,sizeof(char*));

   
   char clearBuff;
   while(clearBuff=getchar() != '\n');

    int id_to_str = 0;

    
   


    char buffer[6];
    for(int i = 0; i < numStudents; i++){
         printf("Enter the id of student %d: ",(i+1));
          inputValid = scanf("%5d",&id_to_str);
        while(id_to_str < 1 || id_to_str==0){
         gcCollector = 0;
        printf("Error...numstudent should be number: ");
        while ((gcCollector=getchar())!= '\n');
        inputValid = scanf("%5d",&id_to_str);

        }
        sprintf(buffer,"%d",id_to_str);
        studentID[i] = strndup(buffer,5);
      

    }


    printf("[ ");
    for(int i = 0; i < numStudents; i++){

        printf("%s, ",studentID[i]);
    }

    printf("]\n");

}/* init_stuTable() */
















/* initialize the course table */
void init_courseTable(){

//int numCourses = 0;
// char **courses;

int gcCollector,validInput = 0;


 printf("How many course are you offering: ");

 validInput = scanf("%1d",&numCourses);

 while(validInput != 1 || (numCourses == 0 || numCourses < 0)){
     printf("Invalid input! expecting an integer: ");
     while((gcCollector=getchar()) != '\n' && gcCollector != EOF);
     validInput = scanf("%d",&numCourses);
    
 }
     while((gcCollector=getchar()) != '\n' && gcCollector != EOF);
    
    courses = (char **)malloc(sizeof(char*) * numCourses);

    char buffer[8];

    int i = 0;
    for(;i < numCourses; i++){
         printf("Please enter the course code for course %d: ",(i+1));
         scanf("%7[^\n]s",buffer);
         while((gcCollector=getchar()) != '\n');
         courses[i] = strndup(buffer,7);
    }


      /* Format prints course code inside [  ] */
      printf("[ ");
    for(int i = 0; i < numCourses; i++){
      
        printf("%s,",courses[i]);
       

    }
     printf(" ]\n");









}/* init_courseTable()*/











/* initialize student registeration table: */

void init_regTable(){



studentsTable = (int**)malloc(sizeof(int*) * numStudents);

if(studentsTable == NULL){
    puts("Memory erro: ");
    exit(EXIT_FAILURE);
}

for(int i = 0; i < numStudents; i++){
    *(studentsTable + i) = (int *)malloc(sizeof(int) * numCourses);

}


 for(int i = 0; i < numStudents; i++){
     for(int j = 0; j < numCourses; j++){
         studentsTable[i][j] = -1;
     }
 }//for()






}/*regiset Student*/



void print_Menu(void){

   printf("1- Register a student in a course\n");
   printf("2- Drop student's course\n");
   printf("3- print registration table\n");
   printf("4- Quit\n");
   printf("Please enter action number:\n");

}

void print_regisTable()
{

    printf("[ ");
    for(int i = 0; i < numStudents; i++)
    {
        printf("[ ");
     for(int j = 0; j < numCourses; j++)
     {
        // studentsTable[i][j] = -1;
       printf("%d,",studentsTable[i][j]);
     }
     printf(" ]");
     
    }
     printf(" ]\n"); 
}

void registerStudent(void){
    int userInput,gbCollector,valid_Input = 0;
    printf("Please enter the student ID: ");
    valid_Input = scanf("%5d",&userInput);
    while((gbCollector=getchar()) != '\n');

    while(valid_Input == 0 || valid_Input == EOF){
        pirntf("Error..expecting integer please enter integer");
        
    }

}