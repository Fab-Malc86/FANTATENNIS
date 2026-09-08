#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "tennista\tennista.h"


int main(){

    //SEZIONE ADMIN
    char adminUserName[30];
    char adminPassword[30];
    printf("\n-----Creazione Admin-----\n");
    

    do{
      printf("Inserisci User Name ---> ");
      fgets(adminUserName,sizeof(adminUserName),stdin);
      adminUserName[strcspn(adminUserName, "\n")] = '\0';// elimino la new line (invio) dal buffer
    }while(strlen(adminUserName) == 0);// controllo se l'utente non scrive niente
    
    printf("%s",adminUserName);



    // INSERIMENTO DATI TENNISTA
    int id;
    char nome[MAX_NOME];
    char cognome[MAX_COGNOME];
    int ranking;
    int costo;

    printf("\n----Inserimento dati Tennista----\n");

    do{
      printf("\nid tennista --> ");
      scanf("%d",&id);
      getchar();// elimino la new line (invio) o altri caratteri dal buffer
    }while(id < 1 || id > MAX_TENNISTI || isalpha(id));
    
    do{
      printf("\nnome tennista --> ");
      fgets(nome,MAX_NOME,stdin);
      nome[strcspn(nome, "\n")] = '\0';// elimino la new line (invio) dal buffer
    }while(strlen(nome) == 0);// controllo se l'utente non scrive niente
    
    do{
      printf("\ncognome tennista --> ");
      fgets(cognome,MAX_COGNOME,stdin);
      cognome[strcspn(cognome, "\n")] = '\0';// elimino la new line (invio) dal buffer
    }while(strlen(cognome) == 0);// controllo se l'utente non scrive niente
    
    do{
      printf("\nranking tennista --> ");
      scanf("%d",&ranking);
      getchar();// elimino la new line (invio) o altri caratteri dal buffer
    }while(ranking < 1 || ranking > MAX_TENNISTI || isalpha(ranking));
    
    do{
      printf("\ncosto tennista --> ");
      scanf("%d",&costo);
      getchar();// elimino la new line (invio) o altri caratteri dal buffer
    }while(costo < 1 || costo > COSTO_MAX || isalpha(costo));
    






    // int id=1;
    // char nome[MAX_NOME] = "Sinner";
    // char cognome[MAX_COGNOME] = "Jakin";
    // int ranking = 1;
    // int costo = 35;

    Tennista_t t1 = creaTennista(id,nome,cognome,ranking,costo);

    visualizzaTennista(t1);

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