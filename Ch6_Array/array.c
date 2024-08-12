#include <stdio.h>
#include <string.h>

int main(void){
    char *string;


    //scanf("%[^\n]s",string);
    gets(string);

    printf("%s",string);

    return 0 ;
}