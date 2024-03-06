#include <stdio.h>

int main() {
    //messaggio di benvenuto
    printf("\nBenenuto nel programma di calcolo della media tra due valori interi!\n\n");
    //definizione variabili

    int numa, numb;
    double media;

    //inserimento valori
    printf("\nInserisci primo numero: ");
    scanf("%d", &numa);

    printf("\nInserisci secondo numero: ");
    scanf("%d", &numb);

    //calcolo media
    media=(float)(numa+numb)/2;

    //stampa risultato
    printf("\nLa loro media aritmetica è: %.2f\n", media);

    //feedback utente
    int voto;
    printf("\nSe sei soddisfatto del risultato, lascia un voto da 1 a 5! ");
    scanf("%d", &voto);
    if (voto < 3) {
        printf("\nAllora la prossima volta fattelo da solo!\n\n");
    }

    else printf("\nGrazie del feedback!\n\n");
        
    return 0;


}