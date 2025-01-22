#include <stdio.h>
#include <string.h>
#define IVA 0.22 // variabile iva


int main(){
// definizione variabili giorni
char giorni[64]= "";
double spesa;
double spesa_iva;
char categoria[64]="";


// Richiesta giorno sttimana e totale spesa
printf("Inserisci giorno della settimana in cui fatto spesa: ");
scanf("%s", giorni);
printf("inserisci totale spesa in euro: ");
scanf("%lf", &spesa);



// Definizione giorno feriale o festivo
if(strcmp(giorni,"Lunedi")==0){
   strcpy(categoria, "Feriale");   }
else if (strcmp(giorni,"Martedi")==0){
strcpy(categoria, "Feriale");    } 
else if (strcmp(giorni,"Mercoledi")==0){
strcpy(categoria, "Feriale");    } 
else if (strcmp(giorni,"Giovedi")==0){
strcpy(categoria, "Feriale");    } 
else if (strcmp(giorni,"Venerdi")==0){
strcpy(categoria, "Feriale");    } 
else if (strcmp(giorni,"Sabato")==0){
strcpy(categoria, "Festivo");    } 
else if (strcmp(giorni,"Domenica")==0){
strcpy(categoria, "Feriale");}

// Stampa categoria giorno
printf("La spesa l'hai fatta un giorno %s\n", categoria);

// Calcolo iva
spesa_iva= (spesa /(1+ IVA));

// Stampo spesa senza iva
printf("Totale spesa è: %.2lf\n", spesa);
printf("Totale spesa senza iva è: %.2lf", spesa_iva);







    // Programma terimnato correttamente
    return 0;
}