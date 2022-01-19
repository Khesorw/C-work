#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define RANGE 100


int main(){





       for(int i=1;i<=RANGE;i++)
   {
       if(i%3 != 0 && i%5 != 0){
        printf("%d\n",i);
       }
       if((i%3==0)&&(i%5==0)){
        printf("%d is multiple of 3 and 5\n",i);
       }
       else if(i%3==0){
        printf("%d is multiple of 3\n",i);
       }
       else if(i%5==0){
        printf("%d is multiple of 5\n",i);
       }

   }

    return(0);
}