#include <stdio.h>
#include <string.h>
#include "tennista.h"



int calcolaCosto(int ranking)
{
    return COSTO_MAX - ranking + 1;
}



int validaRanking(int ranking)
{
    return ranking >= 1 && ranking <= MAX_TENNISTI;
}


int validaTennista(int id,
                   const char nome[],
                   const char cognome[],
                   int ranking,
                   StatoTennista stato)
{
    if (id <= 0)
        return 0;

    if (nome == NULL || nome[0] == '\0')
        return 0;

    if (cognome == NULL || cognome[0] == '\0')
        return 0;

    if (strlen(nome) >= MAX_NOME)
        return 0;

    if (strlen(cognome) >= MAX_COGNOME)
        return 0;

    if (!validaRanking(ranking))
        return 0;

    if (stato != ATTIVO && stato != NON_DISPONIBILE)
        return 0;

    return 1;
}



int creaTennista(Tennista *t,
                 int id,
                 const char nome[],
                 const char cognome[],
                 int ranking,
                 StatoTennista stato)
{

    if (t == NULL)
        return 0;

    if (!validaTennista(id, nome, cognome, ranking, stato))
        return 0;

    (*t).id = id;
    strcpy((*t).nome, nome);
    strcpy((*t).cognome, cognome);
    (*t).ranking = ranking;
    (*t).costo = calcolaCosto(ranking);
    (*t).stato = stato;

    return 1;
}



