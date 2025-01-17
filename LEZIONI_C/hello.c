#include <stdio.h>
#define NEW_LINE printf("\n")
#define PI_GRECO 3.14159265358

int main()

{
    // */ /*commento*/
    // printf("Hello World!!\n\n\n"); 
   
    // // variable of 32 chars
    // char name [32]; 

    // //ask for a name
    // printf("Enter a name: ");

    // //read the input of the user
    // scanf("%s", name);  

    // //print a message with the name entered 
    // printf("\nhello\t %s \n\n\n", name); */

    // inizializazione float chiamata f
    float f = 10.5;

    // chiediamo all'utente di inserire numero reale che sovrascrive f inizializzato prima
    printf("Inserisci numero reale: ");
    scanf("%f", &f);

    // mandiamo a schermo quale numero reale ha scelto utente
    printf("Il numero reale che hai scelto e %f\n", f);

    // calcoliamo area cerchio 
    printf("CALCOLIAMO AREA CERCHIO\n");

    // chiedi utente di inserire reggio del cerchio
    printf("Inserisci raggio cerchio: ");
    scanf("%f", &f);
    printf("Raggio del cerchio che hai scelto è %f", f);

    // calcoliamo area cerchio con la f e il pi_greco
    NEW_LINE;
    f = f * f * PI_GRECO;
    printf("Area del cerchio è %f", f);

















    return 0;
}