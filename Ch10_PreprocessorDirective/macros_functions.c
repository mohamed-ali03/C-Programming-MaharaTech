#include <stdio.h> 


// function like micro with multy lines 

#define Print(x,y,z)    do{printf("%s\n",x);\
                        printf("%s\n",y);\
                        printf("%s\n",z);}while(0);


int main (void){

    printf("File : %s \n",__FILE__);
    printf("Date : %s \n",__DATE__);
    printf("Time : %s \n",__TIME__);

    printf("\n---------------------------------------------------------------------\n\n");
    Print("mohamed Ali","Embedded System Engineer","Alexandria");
    return 0 ; 
}