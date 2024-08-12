#include <stdio.h>

int main(void){
    int students[3][10];
    int i ;
    int j;
    int temp;
    int NumPass = 0 ;
    int NumFaild = 0 ;
    int HighestGrade ;
    int LowestGrade ;
    int avg [3];

    for (i = 0 ;i < 3 ;i++){
        for(j = 0 ; j <10 ; j++){
            temp = rand();
            if (temp < 100){
                students[i][j] = temp ;
            }
            else{
                j--;
            }
        }
    }

    HighestGrade = students[0][0];
    LowestGrade = students[0][0];
    for (i = 0 ;i < 3 ;i++){
        temp =0 ;
        for(j = 0 ; j <10 ; j++){
            if (students[i][j]>=50){
                NumPass++;
                if(students[i][j]> HighestGrade){
                    HighestGrade = students[i][j];
                }
            }
            else if(students[i][j]<50){
                NumFaild++;
                if(students[i][j]< LowestGrade){
                    LowestGrade = students[i][j];
                }
            }
            temp +=students[i][j] ;
        }
        avg[i] = temp /10;
    }

    printf("Number of passes : %i \n",NumPass);
    printf("Number of faild : %i \n",NumFaild);
    printf("Highest Grade: %i \n",HighestGrade);
    printf("Lowest Grade: %i \n",LowestGrade);
    for (i = 0 ; i <3 ; i++){
        printf("Average of class %i is %i \n",i,avg[i]);
    }

    return 0 ;
}