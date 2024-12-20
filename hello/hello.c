#include <stdio.h>

int main()

{
    /*commento*/
    printf("Hello World!!\n\n\n"); 
   
    // variable of 32 chars
    char name [32]; 

    //ask for a name
    printf("Enter a name: ");

    //read the input of the user
    scanf("%s", name);  

    //print a message with the name entered 
    printf("\nhello\t %s \n\n\n", name); 


    return 0;
}