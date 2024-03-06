#include <stdio.h>

int main() {
    //messaggio di benvenuto
    printf("\nBenvenuto nel programma di calcolo della moltiplicazione! \n");

    // dichiarazione variabili
    float numa, numb, risultato; 

    //inserimento primo numero 
    printf("\nInserisci primo numero: ");
    scanf("%f", &numa);

    //inserimento secondo numero
    printf("\nInserisci secondo numero: ");
    scanf("%f", &numb);
    
    //operazione moltiplicazione
    risultato=numa*numb;

    //stampa risultato
    printf("\nIl risultato della moltiplicazione è: %.4f\n\n", risultato);

    // feedback utente
     int voto;

    printf("\nSe sei soddisfatto del risultato, lascia un voto da 1 a 5! ");
    scanf("%d", &voto);
    if (voto < 3) 
    {
         printf("\nAllora la prossima volta fattelo da solo!\n\n");
     }

    else printf("\nGrazie del feedback!\n\n");
        
    
    return 0;


}

