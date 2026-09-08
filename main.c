#include <stdio.h>
#include <string.h>

#include "tennista\tennista.h"


int main(){

    // INSERIMENTO DATI TENNISTA

    int id;
    char nome[MAX_NOME];
    char cognome[MAX_COGNOME];
    int ranking;
    int costo;

    printf("\n----Inserimento dati Tennista----\n");
    printf("\nid tennista --> ");
    scanf("%d",&id);
    
    printf("\nnome tennista --> ");
    fgets(nome,MAX_NOME,stdin);


    // int id=1;
    // char nome[MAX_NOME] = "Sinner";
    // char cognome[MAX_COGNOME] = "Jakin";
    // int ranking = 1;
    // int costo = 35;

    // Tennista_t t1 = creaTennista(id,nome,cognome,ranking,costo);

    // printf("\nid --> %d", t1.id);
    // printf("\nnome --> %s", t1.nome);
    // printf("\ncongome --> %s", t1.cognome);
    // printf("\nranking --> %d", t1.ranking);
    // printf("\ncosto --> %d", t1.costo);
    // printf("\nstato --> %d", t1.stato);

    


  // FILE *file;
  //   Tennista t;

  //   file = fopen("data/tennisti.dat", "rb");

  //   if (file == NULL) {
  //       printf("Errore nell'apertura del file.\n");
  //       return 1;
  //   }

  //   if (fread(&t, sizeof(Tennista), 1, file) == 1) {

  //       printf("ID: %d\n", t.id);
  //       printf("Nome: %s\n", t.nome);
  //       printf("Cognome: %s\n", t.cognome);
  //       printf("Ranking: %d\n", t.ranking);
  //       printf("Costo: %d\n", t.costo);
  //       printf("Stato: %d\n", t.stato);

  //   } else {
  //       printf("Errore nella lettura del tennista.\n");
  //   }

  //   fclose(file);



  return 0;
}