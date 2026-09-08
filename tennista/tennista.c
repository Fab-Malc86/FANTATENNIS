#include <stdio.h>
#include <string.h>
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



