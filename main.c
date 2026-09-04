#include <stdio.h>

#include "tennista\tennista.h"


int main(){

  FILE *file;
    Tennista t;

    file = fopen("data/tennisti.dat", "rb");

    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    if (fread(&t, sizeof(Tennista), 1, file) == 1) {

        printf("ID: %d\n", t.id);
        printf("Nome: %s\n", t.nome);
        printf("Cognome: %s\n", t.cognome);
        printf("Ranking: %d\n", t.ranking);
        printf("Costo: %d\n", t.costo);
        printf("Stato: %d\n", t.stato);

    } else {
        printf("Errore nella lettura del tennista.\n");
    }

    fclose(file);



  return 0;
}