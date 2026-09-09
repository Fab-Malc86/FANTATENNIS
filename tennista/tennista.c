#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "tennista.h"


Tennista_t creaTennista(
  int id,
  char nome[MAX_NOME],
  char cognome[MAX_COGNOME],
  int ranking,
  int costo
  ){

    Tennista_t t;
    t.id = id;
    strcpy(t.nome,nome);
    strcpy(t.cognome,cognome);
    t.ranking = ranking;
    t.costo = costo;
    t.stato = ATTIVO;
    return t;
  }

void visualizzaTennista(Tennista_t t){
    printf("\nid --> %d", t.id);
    printf("\nnome --> %s", t.nome);
    printf("\ncongome --> %s", t.cognome);
    printf("\nranking --> %d", t.ranking);
    printf("\ncosto --> %d", t.costo);
    printf("\nstato --> %d", t.stato);
}

int aggiungiTennista(Tennista_t t) {
    FILE *file = fopen("data/tennisti.dat", "ab");

    if (file == NULL) {
        printf("Errore apertura file tennisti.\n");
        return 0;
    }

    if (fwrite(&t, sizeof(Tennista_t), 1, file) != 1) {
        printf("Errore salvataggio tennista.\n");
        fclose(file);
        return 0;
    }

    fclose(file);
    return 1;
}