
#ifndef TENNISTA_H
#define TENNISTA_H

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



int sum (int x, int y);

int maggioreDeiTre(int x, int y, int z);
#endif