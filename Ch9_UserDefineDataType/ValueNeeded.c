#include <stdio.h>


struct employee
{
    char name[10];
    int salary ;
    int bonus ;
    int deduction ;
};

int main(void){
    int i ;
    int sum  = 0;
    struct employee employees [3] = {{"Ahmed",1000,500,200},{"Amr",2000,1000,0}, {"Waleed",3000,350,200}};

    for (i = 0 ; i< 3 ; i++ ){
        printf("Please Enter your Name :");
        scanf("%s",employees[i].name);
        printf("Please Enter your Salary :");
        scanf("%i",&employees[i].salary);
        printf("Please Enter your Bonus :");
        scanf("%i",&employees[i].bonus);
        printf("Please Enter your Deduction :");
        scanf("%i",&employees[i].deduction);
    }

    for (i = 0 ; i< 3 ; i++){
        sum += employees[i].bonus + employees[i].deduction + employees[i].salary ;
    }
    printf("Total value needed is %i \n",sum);
    return 0 ;
}