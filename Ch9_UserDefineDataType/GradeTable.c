#include <stdio.h>
#pragma pack(1)   // to reduc structure padding 
void printStruct(int num);
typedef struct student{
    char name[10];
    int mathGrade;
    int LanguageGrade;
    int physicsGrade;
    int chemistryGrade;
}student_t;
student_t students [10] ;


int main (void){
    int count  ;
    int ID;
    for (count = 0 ; count < 10 ; count++){
        printf("Please Enter a Student Name : ");
        scanf ("%s",students[count].name);
        printf("Please Enter the Math Grad : ");
        scanf ("%i",&students[count].mathGrade);
        printf("Please Enter the Language Grad : ");
        scanf ("%i",&students[count].LanguageGrade);
        printf("Please Enter the Physics Grad : ");
        scanf ("%i",&students[count].physicsGrade);
        printf("Please Enter the Chemistry Grad : ");
        scanf ("%i",&students[count].chemistryGrade);
    }


    printf("\n\nplease enter the student ID\n");
    scanf("%i",&ID);
    printStruct(ID-1);
    return 0 ;
}


void printStruct(int num){
    if (num <= 10){
        printf("Name: %s\n",students[num].name);
        printf("Math Grad : %i\n",students[num].mathGrade);
        printf("Language Grad : %i\n",students[num].LanguageGrade);
        printf("Physics Grad : %i\n",students[num].physicsGrade);
        printf("Chemistry Grad : %i\n",students[num].chemistryGrade);
    }
    else {
        printf("Student Id is not correct!!\n");
    }
}