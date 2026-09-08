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



int cercaTennistaPerId(const char nomeFile[],
                       int id,
                       Tennista *risultato)
{

  FILE *file;
  Tennista t;

  file = fopen(nomeFile, "rb");

  if(file == 1){
    while(fread(&t, sizeof(Tennista), 1, file) == 1){
        if( t.id == id ){
          *risultato=t;
          fclose(file);
          return 1;
        }
    }


  }



}