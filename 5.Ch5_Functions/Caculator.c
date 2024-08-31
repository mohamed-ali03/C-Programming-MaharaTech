#include <stdio.h>

int  Add(int num1 ,int num2);
int  Sub(int num1 ,int num2);
int  Mul(int num1 ,int num2);
int  Div(int num1 ,int num2);
int  And(int num1 ,int num2);
int  Or (int num1 ,int num2);
int  Xor(int num1 ,int num2);
int  Rem(int num1 ,int num2);
int  Not(int num);
int  Inc(int num);
int  Dec(int num);


int main (){
    int choice ;
    int num1 ;
    int num2 ;
    printf("Press number to select the operation:\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.And\n6.Or\n7.Xor\n8.Reminder\n9.Not\n10.Increment\n11.Decrement\n");
    scanf("%i",&choice);
    switch (choice){
        case 1 :
        case 2 :
        case 3 :
        case 4 :
        case 5 :
        case 6 :
        case 7 :
        case 8 :
            printf("Enter the first number : ");
            scanf("%i",&num1);
            printf("Enter the second number : ");
            scanf("%i",&num2);
            break;
        case 9 :
        case 10:
        case 11:
            printf("Enter the first number : ");
            scanf("%i",&num1);
            break;
        default:
        printf("Invaild !!");
    }

    switch (choice){
        case 1 :
            Add(num1,num2);
            break;
        case 2 :
            Sub(num1,num2);
            break;
        case 3 :
            Mul(num1,num2);
            break;
        case 4 :
            Div(num1,num2);
            break;
        case 5 :
            And(num1,num2);
            break;
        case 6 :
            Or(num1,num2);
            break;
        case 7 :
            Xor(num1,num2);
            break;
        case 8 :
            Rem(num1,num2);
            break;
        case 9 :
            Not(num1);
            break;
        case 10 :
            Inc(num1);
            break;
        case 11 :
            Dec(num1);
            break;
    }
}


int  Add(int num1 ,int num2){
    int res ;
    res = num1 +num2 ;
    printf("%i + %i = %i",num1,num2,res);
}

int  Sub(int num1 ,int num2){
    int res ;
    res = num1 - num2 ;
    printf("%i - %i = %i",num1,num2,res);
}

int  Mul(int num1 ,int num2){
    int res ;
    res = num1 *num2 ;
    printf("%i * %i = %i",num1,num2,res);
}

int  Div(int num1 ,int num2){
    int res ;
    res = num1 /num2 ;
    printf("%i / %i = %i",num1,num2,res);
}

int  And(int num1 ,int num2){
    int res ;
    res = num1 & num2 ;
    printf("%i & %i = %i",num1,num2,res);
}

int  Or (int num1 ,int num2){
    int res ;
    res = num1 | num2 ;
    printf("%i | %i = %i",num1,num2,res);
}

int  Xor(int num1 ,int num2){
    int res ;
    res = num1 ^num2 ;
    printf("%i ^ %i = %i",num1,num2,res);
}

int  Rem(int num1 ,int num2){
    int res ;
    res = num1 %num2 ;
    printf("%i %% %i = %i",num1,num2,res);
}

int  Not(int num){
    int res ;
    res = ~num;
    printf("~%i = %i ",num,res);
}

int  Inc(int num){
    int res ;
    res = num +1;
    printf("INC of %i = %i ",num ,res);
}

int  Dec(int num){
    int res ;
    res = num -1 ;
    printf("DEC of %i = %i ",num ,res);
}

