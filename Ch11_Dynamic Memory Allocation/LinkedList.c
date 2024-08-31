#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *Forward_;
    int data ;
}node;

int main(void){
    int size ;
    int count;
    int flag = 1;
    int sel ;
    node *FirstElement ;
    node *temp ;
    node *temp0;

    // get the size of the linked list from the user 
    printf("Enter the presize of the linked list : ");
    scanf("%i",&size);

    // get the data and initialize the linked list 
    for (count = 0 ; count < size ; count++){
        // check if it is the frist element or not to save the address of the first node
        if (count == 0){
            temp = (node*)malloc(sizeof(node));
            // check if the node is allocated or not 
            if (temp== NULL){
                printf("Error: Failure in accessing the node of position %i!!\n",count+1);
            }
            else {
                temp->Forward_ = NULL;
                printf("Please Enter the data of position %i :",count+1);
                scanf("%i",&(temp->data));
                FirstElement = temp ;
                printf("Node is added \n");
            }
        }
        else {
            temp->Forward_ = (node*)malloc(sizeof(node));
            // check if the node is allocated or not 
            if (temp->Forward_ == NULL){
                printf("Error: Failure in accessing the node of position %i!!\n",count+1);
            }
            else {
                temp = temp->Forward_ ;
                temp->Forward_ = NULL;
                printf("Please Enter the data of position %i :",count+1);
                scanf("%i",&(temp->data));
                printf("Node is added \n");
            }
        }
    }

    while(flag){
        printf("press the number of operation that you need :1.Add node     2.Print all nodes       3.Exit\n");
        scanf("%i",&sel);


        switch (sel){
            case 1 : // Add another node 
                temp->Forward_ = (node*)malloc(sizeof(node));
                // check if the node is allocated or not 
                if(temp->Forward_ == NULL){
                    printf("Error: Failure in accessing the node\n");
                }
                else{
                    temp = temp->Forward_ ;
                    temp->Forward_ = NULL;
                    printf("Please Enter the data you need to add :");
                    scanf("%i",&(temp->data));
                    printf("Node is added \n");
                    size++;
                }
                break;
            case 2 :  // print the whole linked list 
                // assign the address of the first node to temp to access the linked list using "temp pointer"
                temp = FirstElement ;
                // Print the content of the linked list 
                for (count = 0 ; count < size ; count++){
                    printf("data of position %i is %i and Addrass is %p\n",count+1 ,temp->data ,temp->Forward_);
                    temp = temp->Forward_ ;
                }
                break;
            case 3 : // Exit from the program
                printf("thank you for your effort\nGood Bye (:\n");
                flag = 0 ;
                break;
            default: // try again
                printf("Error: Invaild input!!\n"); 
                break;
        }
    }
    

    // free the memory allocation 
    temp0 = FirstElement;
    for (count = 0 ; count < size ; count++){
        temp = temp0 ;
        temp0 = temp0->Forward_;
        free(temp);
    }
    return 0 ;
}