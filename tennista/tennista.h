
#ifndef TENNISTA_H
#define TENNISTA_H

#define MAX_TENNISTI 35
#define COSTO_MAX 35
#define MAX_NOME 30
#define MAX_COGNOME 30

typedef enum {
    NON_DISPONIBILE,
    ATTIVO
} StatoTennista;

typedef struct {
    int id;
    char nome[MAX_NOME];
    char cognome[MAX_COGNOME];
    int ranking;
    int costo;
    StatoTennista stato;
} Tennista;


int validaRanking(int ranking);

int calcolaCosto(int ranking);

int validaTennista(int id,
                   const char nome[],
                   const char cognome[],
                   int ranking,
                   StatoTennista stato);

int creaTennista(Tennista *t,
                 int id,
                 const char nome[],
                 const char cognome[],
                 int ranking,
                 StatoTennista stato);

#endif