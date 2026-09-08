
#ifndef TENNISTA_H
#define TENNISTA_H

#define MAX_TENNISTI 35
#define COSTO_MAX 35
#define MAX_NOME 30
#define MAX_COGNOME 30


typedef enum {
    NON_ATTIVO,
    ATTIVO,
} Stato_t;


typedef struct {
    int id;
    char nome[MAX_NOME];
    char cognome[MAX_COGNOME];
    int ranking;
    int costo;
    Stato_t stato;
} Tennista_t;


Tennista_t creaTennista(
  int id,
  char nome[MAX_NOME],
  char cognome[MAX_COGNOME],
  int ranking,
  int costo
  );





int cercaTennistaPerId(const char nomeFile[],
                       int id,
                       Tennista *risultato);

#endif