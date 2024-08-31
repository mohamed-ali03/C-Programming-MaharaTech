
#include <stdio.h>

void func(void) __attribute__((constructor));

int main(void) {
    printf("I'm in Main\n");
    return 0;
}

void func(void) {
    printf("I'm in Func\n");
}

/* startup and exit not supported in GCC complier */
// #include <stdio.h>

// void func(void);


// #pragma startup func
// #pragma exit    func



// int main (void){
//     printf("I'm in Main\n");
//     return 0 ; 
// }

// void func(void){
//     printf("I'm in Func\n");
//     return ;
// }